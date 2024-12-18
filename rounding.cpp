/*
Danielle Delgado Sosnowska 
12/18/24
Rounding + Random Do Now
*/

#include <iostream> 
#include <cmath>
#include <ctime>
using namespace std;

int main() {

    // Question 1
    double num; // declares variable
    cout << "Enter a number to be rounded: ";
    cin >> num; // assigns to num
    cout.precision(4);
    cout << num << endl; // prints and rounds num

    // Question 2
    srand ((int)time(0));   // srand gets the current time by putting the time() function into it
    int r = (rand() % 100) + 1;
    cout << r;

    return 0;
}