#include <exception>
#include "FileInput.h"

using namespace std;

auto gs_deleter = [](FILE *f) {fclose(f); };

FileInput::FileInput(const char *name) : m_file{fopen_read(name), gs_deleter}
{}

int FileInput::Read()
{
	int ch{ fgetc(m_file.get()) };

	if (ferror(m_file.get()))
		throw runtime_error("read error");

	return ch == EOF ? 0 : ch;
}

FILE *FileInput::fopen_read(const char *fname)
{
	FILE *f = fopen(fname, "rt");

	if (!f)
		throw runtime_error("Can not open file");
}

