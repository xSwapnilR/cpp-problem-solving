// #include <iostream>
// using namespace std;
// class BankAccount {
//     private:
//     int accNumber;
//     double balance;
//     public:
//     BankAccount(int accNum = 0, double bal = 0.0) {
//         accNumber = accNum;
//         balance = bal;
//         if(balance < 0) {
//             cout<<"Invalid initial deposit! Setting balance to 0.0"<<endl;
//         }
//     } 
//     int addBalance(double amount) {
//         balance += amount;
//         cout<<"Your current balance is "<<balance<<endl;

//     }
//     void withdraw(double amount, double balance) {
//         cout<<"Enter amount to be withdraw: "<<amount<<endl;
//         balance -= amount;
//         cout<<"The remaining balance is - "<<balance<<endl;

//     }
// };
// int main () {
//     BankAccount b1;
//     b1.accDetails(1200453, 57000);
//     b1.addBalance(350.45);
//     b1.withdraw(10000);
//     return 0;
// }

                            //  CORRECTED CODE 

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // CORRECTION 1: Data types & Read-Only Invariants
    // Account numbers often contain leading zeroes or characters, so string is preferred over int.
    string accountNumber; 
    double balance;

public:
    // CORRECTION 2: Use a Parameterized Constructor instead of a regular helper function.
    // Constructors guarantee that an object is initialized properly at the exact moment of creation.
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        
        // Enforce invariant at object creation
        if (initialBalance < 0.0) {
            cout << "Invalid initial deposit! Setting balance to 0.0" << endl;
            balance = 0.0; // KEY LEARNING: Must actually modify the variable to fix invalid state!
        } else {
            balance = initialBalance;
        }
    }

    // CORRECTION 3: Proper Return Type & Parameter Validation
    // Function is void because it doesn't need to return a value.
    void deposit(double amount) {
        if (amount > 0.0) {
            balance += amount;
            cout << "Successfully deposited: $" << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // CORRECTION 4: Returning bool & Avoiding Variable Shadowing/cin
    // Do NOT re-declare 'balance' as a parameter or use 'cin' inside a class function 
    // when values are already passed as arguments.
    bool withdraw(double amount) {
        if (amount <= 0.0) {
            cout << "Invalid withdrawal amount!" << endl;
            return false;
        }
        
        // Check for sufficient funds before deducting
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
            return false;
        }

        balance -= amount;
        cout << "Successfully withdrew: $" << amount << endl;
        return true;
    }

    // CORRECTION 5: Getter Functions marked as 'const'
    // Marking member functions as 'const' tells the compiler that this function will NOT alter the object's state.
    double getBalance() const {
        return balance;
    }

    string getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    cout << "--- Test 1: Invalid Initial Deposit ---" << endl;
    BankAccount acc1("ACC1001", -500.0);
    cout << "Current Balance: $" << acc1.getBalance() << endl << endl;

    cout << "--- Test 2: Valid Account & Operations ---" << endl;
    BankAccount acc2("ACC1002", 1000.0);

    // Invalid Deposit
    acc2.deposit(-200.0);

    // Valid Deposit
    acc2.deposit(500.0);
    cout << "Current Balance: $" << acc2.getBalance() << endl << endl;

    // Failed Withdrawal (Overdraft)
    acc2.withdraw(2000.0);

    // Successful Withdrawal
    acc2.withdraw(400.0);
    cout << "Final Balance: $" << acc2.getBalance() << endl;

    return 0;
}