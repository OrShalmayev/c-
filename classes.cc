#include <iostream>
#include <string>
using namespace std;
// We must declare a class before using it, as we do with functions.
class BankAccount{
    // Constructor -The constructor's name is identical to that of the class. It has no return type, not even void.
    public: BankAccount(int x){
        // cout<<"From Constructor :)";
        setBalance(x);
    }
    // If no access specifier is defined, all members of a class are set to private by default.
    public: string name;
    private: int balance;

    public: void sayHi(){
        cout << "Hi" << endl;
    }

    private: void setBalance(int x){
        balance = x;
    }

    public: void deposit(int x){
        balance += x;
        cout << "deposit of " << x <<"successfully made" << endl;
    }

    public: void withdraw(int x){
        balance -= x;
        cout<<"current balance: "<< balance << endl;
    }

    public: void currentBalance(){
        cout<<"current balance: "<<balance<<endl;
    }
}; // a class definition must be followed by a semicolon

int main () {
    // Instantiate the object
    BankAccount bankAccount(5000);
    // Calling a method inside the object.
    bankAccount.currentBalance();
return 0;
}