#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(double initialBalance, double rate)
	: Account(initialBalance)
{
	interestRate = rate;
}

double SavingsAccount::calculateInterest() {
	return interestRate * getBalance();
}

void SavingsAccount::addInterest()
{
	credit(calculateInterest());
}
