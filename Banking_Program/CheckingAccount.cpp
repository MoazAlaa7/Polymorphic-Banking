#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double initialBalance, double transFee)
	: Account(initialBalance)
{
	fee = transFee;
}

void CheckingAccount::credit(double amount) {
	Account::credit(amount);
	chargeFee();
}

bool CheckingAccount::debit(double amount) {
	bool success = Account::debit(amount);
	if (success) {
		chargeFee();
		return true;
	}
	else {
		return false;
	}
}

void CheckingAccount::chargeFee() {
	Account::debit(fee);
}
