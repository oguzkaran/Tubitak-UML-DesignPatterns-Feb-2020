package org.csystem.springboot.app.entity;

import com.fasterxml.jackson.annotation.JsonGetter;

import javax.persistence.*;

@Entity
@Table(name = "postal_codes")
public class PostalCodeInfo { //POJO
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "postalcode_id")
    private long id;

    @Column(name = "postal_code", nullable = false)
    private String postalCode;

    @Column(name = "admin_code1")
    private String adminCode1;

    @Column(name = "admin_code2")
    private String adminCode2;

    @Column(name = "longitude", nullable = false)
    private double longitude;

    @Column(name = "latitude", nullable = false)
    private double latitude;

    @Column(name = "country_code")
    private String countryCode;

    @Column(name = "admin_name1")
    private String adminName1;

    @Column(name = "admin_name2")
    private String adminName2;

    @Column(name = "place_name")
    private String placeName;

    public PostalCodeInfo() {}
    @JsonGetter(value = "lng")
    public double getLongitude()
    {
        return longitude;
    }

    @JsonGetter(value = "lat")
    public double getLatitude()
    {
        return latitude;
    }

    public long getId()
    {
        return id;
    }

    public void setId(long id)
    {
        this.id = id;
    }

    public String getPostalCode()
    {
        return postalCode;
    }

    public void setPostalCode(String postalCode)
    {
        this.postalCode = postalCode;
    }

    public String getAdminCode1()
    {
        return adminCode1;
    }

    public void setAdminCode1(String adminCode1)
    {
        this.adminCode1 = adminCode1;
    }

    public String getAdminCode2()
    {
        return adminCode2;
    }

    public void setAdminCode2(String adminCode2)
    {
        this.adminCode2 = adminCode2;
    }

    public void setLongitude(double longitude)
    {
        this.longitude = longitude;
    }

    public void setLatitude(double latitude)
    {
        this.latitude = latitude;
    }

    public String getCountryCode()
    {
        return countryCode;
    }

    public void setCountryCode(String countryCode)
    {
        this.countryCode = countryCode;
    }

    public String getAdminName1()
    {
        return adminName1;
    }

    public void setAdminName1(String adminName1)
    {
        this.adminName1 = adminName1;
    }

    public String getAdminName2()
    {
        return adminName2;
    }

    public void setAdminName2(String adminName2)
    {
        this.adminName2 = adminName2;
    }

    public String getPlaceName()
    {
        return placeName;
    }

    public void setPlaceName(String placeName)
    {
        this.placeName = placeName;
    }
}
