#include <memory>
#include "util.hpp"

using namespace std;

void Copy(Input &in, Output &out, size_t blockSize)
{
	unique_ptr<char[]> up{ make_unique<char[]>(blockSize) };	
	size_t read{ 0 };

	while ((read = in.Read(up.get(), 0, blockSize)) > 0)
		out.Write(up.get(), 0, read);
}