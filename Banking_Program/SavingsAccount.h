#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
public:
	SavingsAccount(double, double);
	double calculateInterest();
	void addInterest();
private:
	double interestRate;
};

