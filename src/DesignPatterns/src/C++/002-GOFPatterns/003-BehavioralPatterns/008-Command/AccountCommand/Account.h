#pragma once
#include <string>

class Account {
private:
    std::string m_name;
    int m_balance;
    //...
public:
	Account(const char *name, int balance) : m_name{ name }, m_balance{ balance } {}
	[[nodiscard]] int GetBalance() const { return m_balance; }
	void Deposit(int amount);
	void Withdraw(int amount);
};

