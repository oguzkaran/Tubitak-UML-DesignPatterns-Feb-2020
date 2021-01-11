package org.csystem.springboot.app.model;

import com.fasterxml.jackson.annotation.JsonInclude;

public class PostalCodeViewModel {
    private String m_adminCode1;
    private String m_adminCode2;
    private double m_longitude;
    private double m_latitude;
    private String m_countryCode;
    private String m_adminName1;
    private String m_adminName2;
    private String m_placeName;

    @JsonInclude(JsonInclude.Include.NON_NULL)
    public String getAdminCode1()
    {
        return m_adminCode1;
    }

    @JsonInclude(JsonInclude.Include.NON_NULL)
    public String getAdminCode2()
    {
        return m_adminCode2;
    }

    public double getLongitude()
    {
        return m_longitude;
    }

    public double getLatitude()
    {
        return m_latitude;
    }

    @JsonInclude(JsonInclude.Include.NON_NULL)
    public String getCountryCode()
    {
        return m_countryCode;
    }

    @JsonInclude(JsonInclude.Include.NON_NULL)
    public String getAdminName1()
    {
        return m_adminName1;
    }

    @JsonInclude(JsonInclude.Include.NON_NULL)
    public String getAdminName2()
    {
        return m_adminName2;
    }

    @JsonInclude(JsonInclude.Include.NON_NULL)
    public String getPlaceName()
    {
        return m_placeName;
    }

    public void setAdminCode1(String adminCode1)
    {
        m_adminCode1 = adminCode1;
    }

    public void setAdminCode2(String adminCode2)
    {
        m_adminCode2 = adminCode2;
    }

    public void setLongitude(double longitude)
    {
        m_longitude = longitude;
    }

    public void setLatitude(double latitude)
    {
        m_latitude = latitude;
    }

    public void setCountryCode(String countryCode)
    {
        m_countryCode = countryCode;
    }

    public void setAdminName1(String adminName1)
    {
        m_adminName1 = adminName1;
    }

    public void setAdminName2(String adminName2)
    {
        m_adminName2 = adminName2;
    }

    public void setPlaceName(String placeName)
    {
        m_placeName = placeName;
    }
}
