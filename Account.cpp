#include "Account.h"

void Account::displayAcc() const{
	std::cout << "First name: " << fName << " | Last name: " << lName << " | Balance: " << std::fixed << std::setprecision(2) << getBalance() << "\n";
}

bool Account::deposit(double dAmount){
	if (dAmount <= 0) {
		std::cout << "Invalid ammount...\n";
		return false;
	}
	else {
		balance += dAmount;
		std::cout << dAmount << " submitted...\n";
		return true;
	}
}


bool Account::withdraw(double wAmount) {
	if (balance < wAmount) {
		std::cout << "Insufficent funds...\n";
		return false;
	}
	else {
		balance -= wAmount;
		std::cout << wAmount << " withdrawn...\n";
		return true;
	}
}

Account::Account(std::string fName, std::string lName, double balance) :fName{ fName }, lName{ lName }, balance{balance} {}
Account::Account(std::string fName, std::string lName):Account(fName,lName,0.0){}
Account::Account() :Account("None", "None", 0.0) {}

Account::~Account(){}