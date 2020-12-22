#include <exception>
#include "Filesource.h"

using namespace std;

static auto gs_deleter = [](FILE *f) {std::fclose(f);};

FileSource::FileSource(const char *fname) : m_file{ fopen_read(fname), gs_deleter }
{}

int FileSource::GetNextChar()
{
	int ch{ fgetc(m_file.get()) };

	if (ferror(m_file.get()))
		throw runtime_error("read error");

	return ch == EOF ? -1 : ch;
}

FILE *FileSource::fopen_read(const char *fname)
{
	FILE *f = fopen(fname, "rt");

	if (!f)
		throw runtime_error("Can not open file");

	return f;
}

