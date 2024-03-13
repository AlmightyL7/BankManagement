#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Account.h"

class Accounts{
public:
	void displayAccounts() const;
	/*bool removeAccount(Account acc1);*/
	bool addAccount(std::string fName, std::string lName, double balance);

private:
	std::vector<Account> accountList;
};

