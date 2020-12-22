#include <iostream>
#include <string>
#include "ListProductsView.h"

using namespace std;

void ListProductsView::View()
{
	for (auto p : m_products)
		cout << static_cast<string>(p) << endl;
}
