#pragma once

#include <string>
#include <cstring>
#include "IImage.h"

class BitmapImage : public IImage {
public:
	BitmapImage(const char *url);	
	void Show() override;
	void SetUrl(const char *url);
private:
	void loadImage();	
private:
	char m_url[1024];
};

