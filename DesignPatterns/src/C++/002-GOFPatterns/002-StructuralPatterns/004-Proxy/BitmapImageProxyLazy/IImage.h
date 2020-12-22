#pragma once

class IImage {
public:
	virtual void Show() = 0;
	virtual ~IImage() = default;
};
