#include <iostream>

using namespace std;
// We must declare a class before using it, as we do with functions.
class BankAccount{
    public: void sayHi(){
        cout << "Hi" << endl;
    }
}; // a class definition must be followed by a semicolon

int main () {
    // Instantiate the object
    BankAccount bankAccount;
    // Calling a method inside the object.
    bankAccount.sayHi();
return 0;
}