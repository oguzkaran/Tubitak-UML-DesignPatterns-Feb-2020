#include <iostream>
#include <string>
#include "DisplayProductView.h"

using namespace std;

void DisplayProductView::View()
{
	cout << m_product.GetName() << " isimli ürününüz kaydedildi" << endl;
}

