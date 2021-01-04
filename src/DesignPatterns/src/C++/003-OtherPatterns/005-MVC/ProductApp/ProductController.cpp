#include <vector>
#include "ProductController.h"
#include "InsertProductView.h"
#include "ListProductsView.h"
#include "DisplayProductView.h"
#include "ProductsAppDAL.h"

using namespace std;

unique_ptr<IndexView> ProductController::Index()
{
	auto up{ make_unique<IndexView>() };

	up->View();

	return up;		
}

void ProductController::InsertProduct()
{
	InsertProductView view;

	view.View();

	ProductsAppDAL dal;

	Product p{ view.GetProduct() };

	dal.InsertProduct(p);
	//...
	DisplayProductView dv{ view.GetProduct() };

	dv.View();	
}

void ProductController::ListAllProducts()
{
	ProductsAppDAL dal;

	auto products{ dal.GetProducts() };

	ListProductsView view{ products };

	view.View();
}