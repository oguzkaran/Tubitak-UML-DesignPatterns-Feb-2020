#pragma once
#include <string>
#include <memory>

#include "IImage.h"
#include "BitmapImage.h"

class BitmapImageProxy : public IImage {
public:
	BitmapImageProxy(const std::string &url) : m_image{ std::make_unique<BitmapImage>(url.data()) }
	{}
	void Show();
	void SetUrl(const std::string &url);
private:
	std::unique_ptr<BitmapImage> m_image;
};

