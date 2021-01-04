#pragma once
#include <memory>
#include "Product.h"
#include "IView.h"


class DisplayProductView : public IView {
public:
	DisplayProductView(const Product &product) : m_product{ product } {}
public:
	void View() override;
private:
	Product m_product;	
};


