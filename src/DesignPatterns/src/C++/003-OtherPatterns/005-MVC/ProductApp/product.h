#pragma once

#include <string>
#include <cstddef>

class Product {
public:
	Product() = default;
	Product(int id, const std::string &name, std::size_t stock, double price)
		: m_id{ 0 }, m_name{ name }, m_stock{ stock }, m_price{ price } {}
	Product(const std::string &name, std::size_t stock, double price)
		: Product{ 0, name, stock, price } {}
	void SetId(std::size_t id);
	int GetId() const { return m_id; }
	std::string GetName() const { return m_name; }
	std::size_t GetStock() const { return m_stock; }
	double GetPrice() const { return m_price; }
	explicit operator std::string ()  const;
public:
	int m_id;
	std::string m_name;
	std::size_t m_stock;
	double m_price;
};

