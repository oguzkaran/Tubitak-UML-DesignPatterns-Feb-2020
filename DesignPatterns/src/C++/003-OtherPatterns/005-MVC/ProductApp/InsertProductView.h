#pragma once

#include <memory>
#include "Product.h"
#include "IView.h"

class InsertProductView : public IView { 
public:
	void View() override;
public:
	Product GetProduct() const { return m_product; }
private:
	Product m_product;
};

