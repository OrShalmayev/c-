#include <iosream>
#include <cstdlib>
using namespace std;

// Functions

// Main function
int main(){

    // The srand() function is used to generate truly random numbers.
    // This function allows to specify a seed value as its parameter, which is used for the rand() function's algorithm.
    srand(98);

    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }

    // Changing the seed value changes the return of rand(). However, the same argument will result in the same output.

    // because the data type of the function is integer
    return 0;
}