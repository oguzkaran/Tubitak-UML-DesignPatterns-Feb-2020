#include <iostream>
#include "Account.h"
#include "AccountCommand.h"

using namespace std;

#if 1
int main()
{
	Account account{ "Lokman", 1000 };
	AccountCommand cmd{ &account, 100, Operation::DEPOSIT };

	cmd.Execute();

	cout << account.GetBalance() << endl;
	
	return 0;
}

#endif
