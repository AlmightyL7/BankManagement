#include "Accounts.h"

void Accounts::displayAccounts() const {
	if (accountList.size() == 0) {
		std::cout << "\nNo Accounts...\n";
	}
	else {
		for (const Account &accounts : accountList) {
			accounts.displayAcc();
			std::cout << "\n==========================================\n";
		}
	}
}



bool Accounts::addAccount(std::string fName, std::string lName, double balance){
	Account temp{ fName, lName, balance };
	accountList.push_back(temp);
	std::cout << "Account added...\n";
	return true;
}

