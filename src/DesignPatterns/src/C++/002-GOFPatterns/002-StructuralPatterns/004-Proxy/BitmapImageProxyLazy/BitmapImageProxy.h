#pragma once
#include <string>
#include <memory>

#include <string>
#include "IImage.h"
#include "BitmapImage.h"

class BitmapImageProxy : public IImage  {
public:
	BitmapImageProxy(const std::string &url) : m_url{ url }
	{}
	void Show();
	void SetUrl(const std::string &url);
private:
	std::string m_url;	
};

