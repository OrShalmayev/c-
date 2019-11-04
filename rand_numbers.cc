#include <iosream>
#include <cstdlib>
using namespace std;

// Functions
int randNums(){
    return rand();
}

int randNumsBetween(int x){
    return 1 + (rand() % 6);
}
// Main function
int main(){
    // When used, we are required to include the header <cstdlib>.
    cout<<rand();
    
    // output 10 random numbers 
    int counter = 1;
    while(counter <= 10){
        cout<<counter<<endl;
        counter++;
    }

    // print random numbers between 1 to the number that defined in the function argument
    int between = 100;
    cout << "Random number between 1 to " << between << endl << "is: " << randNumsBetween(between) << endl;
    // because the data type of the function is integer
    return 0;
}