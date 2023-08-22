#pragma once
#include "Account.h"
class CheckingAccount : public Account
{
public:
	CheckingAccount(double, double);
	virtual void credit(double amount) override;
	virtual bool debit(double amount) override;

private:
	double fee;
	void chargeFee();
};

