#include "AccountCommand.h"


void AccountCommand::Execute()
{
	switch (m_op) {
	case Operation::DEPOSIT:
		m_account->Deposit(m_amount);
		break;
	case Operation::WITHDRAW:
		m_account->Withdraw(m_amount);
		break;
	}
	m_executed = true;
}
 
int AccountCommand::ExecuteRead()
{
	return m_account->GetBalance();
}

void AccountCommand::Undo()
{
	if (!m_executed)
		return;

	switch (m_op) {
	case Operation::DEPOSIT:
		m_account->Withdraw(m_amount);
		break;
	case Operation::WITHDRAW:
		m_account->Deposit(m_amount);
		break;
	}
	m_executed = false;
}

