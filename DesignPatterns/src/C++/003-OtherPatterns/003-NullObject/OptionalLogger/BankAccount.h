#pragma once
#include <string>
#include <memory>
#include "ILogger.h"
#include "OptionalLogger.h"

class BankAccount {
private:
    int m_balance;
    std::string m_name;
    std::shared_ptr<OptionalLogger> m_logger;
public:
	BankAccount(int balance, std::string name, const std::shared_ptr<ILogger> &logger = OptionalLogger::noLog);

	[[nodiscard]] std::string GetName() const;

	[[nodiscard]] int GetBalance() const;

	void Deposit(int amount);
	//...
};

