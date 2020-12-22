#pragma once

#include <string>
#include <memory>
#include "ILogger.h"


class BankAccount {
public:
	static std::shared_ptr<ILogger> noLog;
public:
	BankAccount(int balance, std::string name, std::shared_ptr<ILogger> logger = noLog);

	[[nodiscard]] std::string GetName() const;

	[[nodiscard]] int GetBalance() const;

	void Deposit(int amount);	
	
	//...
private:
	int m_balance;
	std::string m_name;
	std::shared_ptr<ILogger> m_logger;
};

