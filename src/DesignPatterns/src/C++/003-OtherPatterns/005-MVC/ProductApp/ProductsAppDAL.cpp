#include "ProductsAppDAL.h"

using namespace std;


void ProductsAppDAL::InsertProduct(Product &p)
{
	m_dao.Insert(p);
}

vector<Product> ProductsAppDAL::GetProducts()
{
	return m_dao.GetAll();
}

