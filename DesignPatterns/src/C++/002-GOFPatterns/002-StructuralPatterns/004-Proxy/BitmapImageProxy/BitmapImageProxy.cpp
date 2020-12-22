#include "BitmapImageProxy.h"

#include <string>

using namespace std;

void BitmapImageProxy::Show()
{
	//...
	m_image->Show();
}

void BitmapImageProxy::SetUrl(const string &url)
{
	m_image->SetUrl(url.data());
}