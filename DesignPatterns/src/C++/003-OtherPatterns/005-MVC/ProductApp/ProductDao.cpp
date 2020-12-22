#include <vector>
#include "ProductDao.h"
#include <stdexcept>

using namespace std;

static vector<Product> gs_products;
static size_t gs_currentId{ 1 };

bool ProductDao::Insert(Product &p)
{
	p.SetId(gs_currentId++);
	gs_products.push_back(p);

	return true;
}

std::vector<Product> ProductDao::GetAll()
{
	return gs_products;
}

bool ProductDao::Update(Product &p)
{
	throw logic_error{ "unsupported function" };
}

bool ProductDao::Delete(Product &p)
{
	throw logic_error{ "unsupported function" };
}

