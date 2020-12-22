#include <iostream>
#include "ProductApp.h"
#include "ProductController.h"

using namespace std;

void ProductApp::insertProc()
{
	ProductController pc;

	pc.InsertProduct();	
}

void ProductApp::deleteProc()
{
	cout << "Delete" << endl;
}
void ProductApp::updateProc()
{
	cout << "Update" << endl;
}

void ProductApp::listProc()
{
	ProductController pc;

	pc.ListAllProducts();
}
void ProductApp::Run()
{
	for (;;) {
		ProductController c;
		auto indexView{ c.Index() };
		auto option{ indexView->GetOption() };

		switch (option) {
		case 1:
			insertProc();
			break;
		case 2:
			updateProc();
			break;
		case 3:
			deleteProc();
			break;
		case 4:
			listProc();
			break;
		case 5:
			goto EXIT_APP;
		default:
			cout << "Geçersiz Seçenek" << endl;
		}
	}
EXIT_APP:
	cout << "Teşekkürler" << endl;	
}