/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Hasnainkhan
 * Reg No     : L1s26bscs0114
 * Assignment : 01 - Getting Started with GitHub
 */

#include <iostream>
using namespace std;

int main() {

    int number = 50;
    int sum = 0;

    // Calculate the sum using a for loop
    for (int i = 1; i <= number; i++) {
        sum = sum + i;
    }

    // Display the result
    cout << "====================================" << endl;
    cout << "   SUM OF NATURAL NUMBERS" << endl;
    cout << "====================================" << endl;

    cout << "Numbers: 1 to " << number << endl;
    cout << "Sum using loop: " << sum << endl;

    // Calculate the sum using formula
    int formula = number * (number + 1) / 2;

    cout << "Sum using formula: " << formula << endl;

    // Check both results
    if (sum == formula) {
        cout << "Result verified successfully!" << endl;
    } else {
        cout << "Results do not match." << endl;
    }

    cout << "====================================" << endl;

    return 0;
}
