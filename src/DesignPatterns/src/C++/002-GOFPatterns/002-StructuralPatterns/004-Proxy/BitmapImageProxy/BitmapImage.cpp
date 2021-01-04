#include "BitmapImage.h"

#include <iostream>

using namespace std;

BitmapImage::BitmapImage(const char *url)
{
	loadImage();
	std::strcpy(m_url, url);
}

void BitmapImage::Show()
{
	cout << "Show Image:" << m_url << endl;
}

void BitmapImage::SetUrl(const char *url)
{
	cout << "Set url" << endl;
	strcpy(m_url, url);
	loadImage();
}

void BitmapImage::loadImage()
{
	cout << "loading image" << endl;
}
