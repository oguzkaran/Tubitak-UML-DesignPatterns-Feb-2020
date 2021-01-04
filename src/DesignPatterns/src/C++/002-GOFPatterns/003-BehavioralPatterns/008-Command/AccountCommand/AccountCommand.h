#pragma once
#include "ICommand.h"
#include "Account.h"
#include <memory>

enum Operation {DEPOSIT, WITHDRAW, GETBALANCE};

class AccountCommand : public ICommand {
private:
    Account *m_account;
    int m_amount;
    Operation m_op;
    bool m_executed;
public:
	AccountCommand(Account *account, int amount, Operation op = Operation::GETBALANCE)
		: m_account{ account }, m_amount{ amount }, m_op{ op }, m_executed{ false }
	{}
	void Execute() override;	
	int ExecuteRead();
	void Undo();
};

