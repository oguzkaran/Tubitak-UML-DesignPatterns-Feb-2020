#pragma once

struct  IImage {
	virtual void Show() = 0;
	virtual ~IImage() = default;
};
