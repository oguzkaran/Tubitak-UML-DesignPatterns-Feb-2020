#include "BankAccount.h"

#include <utility>
#include "OptionalLogger.h"

using namespace std;

BankAccount::BankAccount(int balance, std::string name, const std::shared_ptr<ILogger> &logger)
	: m_balance{ balance }, m_name{std::move( name )}, m_logger{ make_shared<OptionalLogger>(logger)}
{
	m_logger->Information("BankAccount object created");
}

std::string BankAccount::GetName() const
{
	m_logger->Information("BankAccount GetName");

	return m_name;
}

int BankAccount::GetBalance() const
{
	m_logger->Information("BankAccount GetBalance");

	return m_balance;
}

void BankAccount::Deposit(int amount)
{
	m_logger->Warning("BankAccount Deposit");
	m_balance += amount;
}





