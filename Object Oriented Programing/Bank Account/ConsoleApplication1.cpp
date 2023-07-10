#include <iostream>
using namespace std;

class BankAccount {
private:
    // Data Members:
    int accountNumber;
    double balance;

public:
    // Constractor
    BankAccount() {
        accountNumber = 0;
        balance = 0;
    }
    // Member functons
    void initialValues(int a, double b) {
        accountNumber = a;
        balance = b;
    }

    void depositeAmount(double ammount) {
        deposit(ammount);
    }
private:
    void deposit(double ammount) {
        balance += ammount;
    }
public:
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << "tk" << endl;
        cout << endl;
    }
};

int main()
{
    BankAccount b;
    
    // Updating Initial Balance:
    b.initialValues(2, 5000);
    // Display:
    b.display();
    // Adding First Month diposit:
    b.depositeAmount(300);
    // Adding Second Month diposit:
    b.depositeAmount(300);
    // Adding Third Month diposit:
    b.depositeAmount(300);
    // Balance After three month:
    cout << "Balance after three month: " << endl;
    b.display();
}   