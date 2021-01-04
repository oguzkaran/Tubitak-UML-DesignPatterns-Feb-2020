#pragma once
#include <memory>
#include "IndexView.h"

class ProductController {
public:
	std::unique_ptr<IndexView> Index();
	void InsertProduct();
	void ListAllProducts();
	//...
};

