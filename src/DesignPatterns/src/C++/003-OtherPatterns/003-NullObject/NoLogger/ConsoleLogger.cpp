#include "ConsoleLogger.h"

#include <iostream>

using namespace std;

void ConsoleLogger::Information(const std::string &msg)
{
	cout << "Information:" << msg << endl;
}
void ConsoleLogger::Warning(const std::string &msg)
{
	cout << "Warning:" << msg << endl;
}