#include "Account.h"

void Account::Deposit(int amount)
{
	//...
	m_balance += amount;
}

void Account::Withdraw(int amount)
{
	//...
	m_balance -= amount;
}
