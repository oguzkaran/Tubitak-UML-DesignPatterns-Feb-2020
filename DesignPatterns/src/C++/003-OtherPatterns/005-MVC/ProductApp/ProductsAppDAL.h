#pragma once
#include <vector>
#include <memory>
#include "Product.h"
#include "ProductDao.h"

class ProductsAppDAL {
public:
	void InsertProduct(Product &p);
	std::vector<Product> GetProducts();
private:
	ProductDao m_dao; //Singleton yapılabilir
};

