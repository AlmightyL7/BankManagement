#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class Account{
public:

	//constructors
	Account();
	Account(std::string fName, std::string lName);
	Account(std::string fName, std::string lName, double balance);

	//destructor
	~Account();

	//class methods
	bool withdraw(double wAmount);	//withdraw method
	bool deposit(double dAmount);	//deposit method
	void displayAcc() const;		//display method

	//getters & setters
	std::string getFName() const { return fName; }
	void setFName(std::string fName) { this->fName; }

	std::string getLName() const { return lName; }
	void setLName(std::string lName) { this->lName; }

	double getBalance() const { return balance; }
	void setBalance(double balance) { this->balance; }
	

protected:

	//class attributes
	std::string fName;	//first Name
	std::string lName;	//last Name
	double balance;
};

