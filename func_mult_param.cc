#include <iosream>
using namespace std;

// Functions
int sumOfTwo(int x, int y){
    return x+y;
}
// Main function
int main(){
    cout<<sumOfTwo(10,5);
    // Assign result to a variable
    int sum;
    sum = sumOfTwo(10,3);
    cout<<sum<<endl;
    return 0;
}