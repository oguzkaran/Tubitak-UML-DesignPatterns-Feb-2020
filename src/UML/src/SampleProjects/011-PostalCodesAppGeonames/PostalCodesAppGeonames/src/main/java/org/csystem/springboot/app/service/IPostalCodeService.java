package org.csystem.springboot.app.service;

import org.csystem.springboot.app.model.PostalCodeViewModel;

public interface IPostalCodeService {
    Iterable<PostalCodeViewModel> getPostalCode(String postalCode, String countryCode);
}
