#include <iostream>
#include <memory>
#include "BankAccount.h"
#include "ConsoleLogger.h"

using namespace std;

#if 1
int main()
{
	BankAccount ba{ 1000, "oguz", make_shared<ConsoleLogger>() };

	ba.Deposit(200);

	BankAccount ba2{ 3000, "yavuz" };

	ba2.Deposit(200);

	return 0;
}

#endif


