package org.csystem.springboot.app.entity;

import javax.persistence.*;
import java.time.LocalDateTime;

@Entity
@Table(name = "client_informations")
public class ClientInfo {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "client_info_id")
    private long id;

    @Column(name = "host_addr", nullable = false)
    private String hostAddr;

    @Column(name = "postal_code", nullable = false)
    private String postalCode;

    @Column(name = "country", nullable = false)
    private String country;

    @Column(name = "query_date_time", nullable = false)
    private LocalDateTime queryDateTime = LocalDateTime.now();

    public ClientInfo() {}
    public ClientInfo(String hostAddr, String postalCode, String country)
    {
        this.hostAddr = hostAddr;
        this.postalCode = postalCode;
        this.country = country;
    }

    public long getId()
    {
        return id;
    }

    public void setId(long id)
    {
        this.id = id;
    }

    public String getHostAddr()
    {
        return hostAddr;
    }

    public void setHostAddr(String hostAddr)
    {
        this.hostAddr = hostAddr;
    }

    public String getPostalCode()
    {
        return postalCode;
    }

    public void setPostalCode(String postalCode)
    {
        this.postalCode = postalCode;
    }

    public String getCountry()
    {
        return country;
    }

    public void setCountry(String country)
    {
        this.country = country;
    }

    public LocalDateTime getQueryDateTime()
    {
        return queryDateTime;
    }

    public void setQueryDateTime(LocalDateTime queryDateTime)
    {
        this.queryDateTime = queryDateTime;
    }
}
