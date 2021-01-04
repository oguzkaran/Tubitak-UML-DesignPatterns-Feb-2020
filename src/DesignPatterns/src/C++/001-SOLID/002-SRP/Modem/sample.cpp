#include <iostream>
#include "Modem.hpp"

using namespace std;

void DoWorkForTransMission(ITransmission &t, const char *buf, size_t size)
{
    t.send(buf, size);
}

#if 1
int main()
{
	char buf[]{ "ankara" };
	char buf2[10];
	Modem m;

    m.connect();
    m.send(buf, 6);
    m.receive(buf2, 10);
	m.disconnect();

	DoWorkForTransMission(m, buf, 5);
}

#endif
