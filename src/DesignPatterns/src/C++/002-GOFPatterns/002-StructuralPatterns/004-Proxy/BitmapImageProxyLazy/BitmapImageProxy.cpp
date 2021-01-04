#include "BitmapImageProxy.h"

#include <string>

using namespace std;

void BitmapImageProxy::Show()
{
	//...
	BitmapImage image{m_url.data()};

	image.Show();	
}

void BitmapImageProxy::SetUrl(const string &url)
{
	m_url = url;
}