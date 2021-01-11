package org.csystem.springboot.app.mapper;

import org.csystem.springboot.app.entity.PostalCodeInfo;
import org.csystem.springboot.app.model.PostalCodeViewModel;
import org.mapstruct.Mapper;

@Mapper(implementationName = "PostalCodeMapperImpl", componentModel = "spring")
public interface IPostalCodeMapper {
    PostalCodeInfo viewModelToCodeInfo(PostalCodeViewModel postalCodeViewModel);
    PostalCodeViewModel codeInfoToViewModel(PostalCodeInfo postalCodeInfo);
}
