#pragma once

#include <vector>
#include <string>
#include "Product.h"
#include "IView.h"

class ListProductsView : public IView {
public:
	ListProductsView(const std::vector<Product> products) : m_products{ products } {}
public:
	void View() override;
public:
	std::vector<Product> GetProducts() const { return m_products; }
private:
	std::vector<Product> m_products;
};

