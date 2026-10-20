#include <iostream>
using namespace std;
class bankAccount {
    private:
    int accountNo;
    double balance;
    public:

    bankAccount(int accNo = 0, double bal = 0.0) {
accountNo = accNo;
balance = bal;
    }

    bool deposit(double amount) {
        if (amount>0) {
            cout<<amount<<" has been credited in your account."<<endl;
            balance += amount;
            return true;
        }
        return false;
    }
    
    
    bool withdraw(double amount) {
        if (amount>0 && amount<=balance) {
            
            balance = balance - amount;
            return true;
        }
        return false;
    }
        
    double getBalance() const{
        return balance;
    }
};
    int main () {

bankAccount b1(101, 500.0) ;
b1.deposit(-500);
b1.getBalance();


return 0;
    }
