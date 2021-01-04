#include <string>
#include <iostream>

#include "InsertProductView.h"

using namespace std;

void InsertProductView::View()
{
	string name;
	size_t stock;
	double price;

	cout << "Ürün adını giriniz" << endl;
	cin >> name;

	cout << "Ürün miktarını giriniz" << endl;
	cin >> stock;

	cout << "Ürün birim fiyatını giriniz" << endl;
	cin >> price;

	//...
	
	m_product = Product(name, stock, price);
}
