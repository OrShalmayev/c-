#include <iosream>
#include <cstdlib>
using namespace std;

// Functions
 void myFunc(int *x){
     *x = 100;
 }
// Main function
int main(){
    int y = 20;
    myFunc(&y);
    cout<<y;//outputs 100
    // because the data type of the function is integer
    return 0;
}