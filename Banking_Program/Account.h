#pragma once

class Account
{
public:
	Account( double );
	//void setBalance(double);
	double getBalance();
	virtual void credit( double );
	virtual bool debit( double );

private:
	double balance;
};

