// BankManagement
// 
//Open an account
//Show account details
//Deposit
//Withdraw
//Search and exit.
//This project will let you understand the fundamentals of banking apps.In a nutshell, you can say that this primary C++ project is going to familiarize you with data adjustment, how to add, modify or delete any filed record.Hence, it is a very crucial project that can enhance your mastery of C++.


#include <iostream>
#include "Account.h"
#include "Accounts.h"


int main(){
    
    Account acc1{ "Lawrence", "Counts", 1000.569 };
    std::cout << "\n=================\n";
    std::cout << "Hello World!\n";
    acc1.displayAcc();
    std::cout << "\n=================\n";
    acc1.deposit(120.01);
    acc1.displayAcc();
    std::cout << "\n=================\n";
    acc1.withdraw(11120.01);
    acc1.displayAcc();
    std::cout << "\n=================\n";
    acc1.withdraw(1120.01);
    acc1.displayAcc();
    std::cout << "\n=================\n";
    acc1.deposit(-11120.01);
    acc1.displayAcc();
    std::cout << "\n=================\n";
    acc1.deposit(50.00);
    acc1.displayAcc();

    Account acc2{ "Ruth", "Goup", 180.56 };
    Account acc3{ "Gary", "Snail", 3000.10 };
    Account acc4{ "Patrick", "Star", 20.54 };

    Accounts list1;

    list1.displayAccounts();

    return 0;
}

