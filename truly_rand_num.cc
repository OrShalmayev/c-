#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
/*
A solution to generate truly random numbers,
is to use the current time as a seed value for the srand() function.
This example makes use of the time() function to get the number of seconds on your system time,
 and randomly seed the rand() function (we need to include the <ctime> header for it): 
*/
  srand(time(0));

  for (int x = 1; x <= 10; x++) {
    cout << 1 + (rand() % 6) << endl;
  }
}