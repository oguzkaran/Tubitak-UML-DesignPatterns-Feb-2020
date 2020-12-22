#include <iostream>
#include "IndexView.h"

using namespace std;


void IndexView::View()
{
	displayMenu();
	cin >> m_option;
}

void IndexView::displayMenu() const
{
	cout << "1.Ekle" << endl;
	cout << "2.Güncelle" << endl;
	cout << "3.Sil" << endl;
	cout << "4.Listele" << endl;
	cout << "5.Çıkış" << endl;
	cout << "Seçenek:";
}