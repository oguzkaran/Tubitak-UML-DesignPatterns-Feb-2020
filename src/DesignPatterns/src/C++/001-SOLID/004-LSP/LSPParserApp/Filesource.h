#pragma once

#include <memory>
#include <cstdio>
#include <functional>
#include "ISource.hpp"

class FileSource : public ISource {
public:
	FileSource(const char *fname);	
public:
	int GetNextChar() override;	
private:
	std::FILE *fopen_read(const char *fname);
private:
	std::unique_ptr<std::FILE, std::function<void(std::FILE *)>> m_file;
};

