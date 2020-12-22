#include <memory>
#include <utility>
#include "BankAccount.h"
#include "NoLogger.h"

using namespace std;

shared_ptr<ILogger> BankAccount::noLog{ make_shared<NoLogger>() };

BankAccount::BankAccount(int balance, std::string name, std::shared_ptr<ILogger> logger)
	: m_balance{ balance }, m_name{std::move( name )}, m_logger{std::move( logger )}
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

