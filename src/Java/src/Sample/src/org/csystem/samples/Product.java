package org.csystem.samples;

import java.math.BigDecimal;

public class Product {
    private String m_id;
    private String m_name;
    private int m_stock;
    private BigDecimal m_cost, m_price;

    public Product(String id, String name, int stock, BigDecimal cost, BigDecimal price)
    {
        m_id = id;
        m_name = name;
        m_stock = stock;
        m_cost = cost;
        m_price = price;
    }


    public String getId()
    {
        return m_id;
    }


    public void setId(String id)
    {
        this.m_id = id;
    }


    public String getName()
    {
        return m_name;
    }


    public void setName(String name)
    {
        this.m_name = name;
    }


    public int getStock()
    {
        return m_stock;
    }


    public void setStock(int stock)
    {
        this.m_stock = stock;
    }


    public BigDecimal getCost()
    {
        return m_cost;
    }


    public void setCost(BigDecimal cost)
    {
        this.m_cost = cost;
    }


    public BigDecimal getPrice()
    {
        return m_price;
    }


    public void setPrice(BigDecimal price)
    {
        this.m_price = price;
    }

    public String toString()
    {
        return m_name;
    }

}
