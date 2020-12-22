#pragma once
#include <memory>
#include <functional>
#include <cstdio>
#include "Input.h"

class FileInput : public Input {
public:
	FileInput(const char *name);
	int Read();
private:
	std::FILE *fopen_read(const char *fname);
private:
	std::unique_ptr<FILE, std::function<void(FILE *)>> m_file;
};

