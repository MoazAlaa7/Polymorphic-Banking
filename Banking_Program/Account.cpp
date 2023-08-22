#include "Account.h"
#include <iostream>

Account::Account(double initialBalance) {
	if (initialBalance >= 0.0) {
		balance = initialBalance;
	}
	else {
		std::cout << "Invalid reqeuest: Balance can't be negative";
		balance = 0.0;
	}
}

//void Account::setBalance(double newBalance) {
//	balance = newBalance;
//}

double Account::getBalance() {
	return balance;
}

void Account::credit(double amount) {
	balance = balance + amount;
}

bool Account::debit(double amount) {
	if (amount <= balance) {
		balance = balance - amount;
		return true;
	}
	else {
		std::cout << "Invalid reqeuest: debit amount exceeds balance" << std::endl;
		return false;
	}
}

