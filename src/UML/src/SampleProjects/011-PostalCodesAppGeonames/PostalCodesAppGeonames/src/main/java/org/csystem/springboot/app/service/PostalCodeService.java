package org.csystem.springboot.app.service;

import org.csystem.springboot.app.entity.PostalCodeInfo;
import org.csystem.springboot.app.mapper.IPostalCodeMapper;
import org.csystem.springboot.app.model.PostalCodeViewModel;
import org.csystem.springboot.app.model.PostalCodesInfoDTO;
import org.csystem.springboot.app.repository.IPostalCodeRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Service;
import org.springframework.web.client.RestTemplate;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.StreamSupport;

@Service
public class PostalCodeService implements IPostalCodeService {
    @Autowired
    private IPostalCodeMapper m_postalCodeMapper;

    @Autowired
    private RestTemplate m_restTemplate;

    @Autowired
    private IPostalCodeRepository m_postalCodeRepository;

    @Value("${geonames.url}")
    private String m_url;

    private List<PostalCodeViewModel> savePostalCodes(String postalCode, String countryCode)
    {
        var postalCodeModels = getPostalCodeFromGeonames(postalCode, countryCode);
        var postalCodeInfos = postalCodeModels.getPostalCodes();

        m_postalCodeRepository.saveAll(postalCodeInfos);

        return postalCodeInfos
                .stream()
                .map(pi -> m_postalCodeMapper.codeInfoToViewModel(pi))
                .collect(Collectors.toList());
    }

    private Iterable<PostalCodeViewModel> convertToViewModels(Iterable<PostalCodeInfo> postalCodeInfos)
    {
        return StreamSupport.stream(postalCodeInfos.spliterator(), false)
                .map(pi -> m_postalCodeMapper.codeInfoToViewModel(pi)).collect(Collectors.toList());
    }

    private PostalCodesInfoDTO getPostalCodeFromGeonames(String postalCode, String countryCode)
    {
        String url = String.format(m_url, postalCode, countryCode.isEmpty() ? "tr" : countryCode);

        return m_restTemplate.getForObject(url, PostalCodesInfoDTO.class);
    }

    @Override
    public Iterable<PostalCodeViewModel> getPostalCode(String postalCode, String countryCode)
    {
        countryCode = countryCode.isEmpty() ? "TR" : countryCode.toUpperCase();

        if (!m_postalCodeRepository.existsByPostalCodeAndCountryCode(postalCode, countryCode))
            return savePostalCodes(postalCode, countryCode);

        return convertToViewModels(m_postalCodeRepository.findByPostalCodeAndCountryCode(postalCode, countryCode));
    }
}










