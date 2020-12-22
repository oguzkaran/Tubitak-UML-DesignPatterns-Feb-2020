#pragma once
#include <vector>
#include "IDao.h"
#include "Product.h"

class ProductDao : public IDao<Product, std::vector<Product>> {
public:
	bool Insert(Product &p) override;
	std::vector<Product> GetAll() override;
	bool Update(Product &p) override;
	bool Delete(Product &p) override;
};

