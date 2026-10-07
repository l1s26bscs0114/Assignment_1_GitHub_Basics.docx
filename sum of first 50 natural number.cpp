/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Hasnainkhan
 * Reg No     : L1s26bscs0114
 * Assignment : 01 - Getting Started with GitHub
 */

#include <iostream>
using namespace std;

int main() {
    const int N = 50;
    int sum = 0;

    // Method 1: add numbers one by one using a loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    cout << "Sum of first " << N << " natural numbers (loop): " << sum << endl;

    // Method 2: verify using the formula n(n+1)/2
    int formulaSum = N * (N + 1) / 2;
    cout << "Sum using formula n(n+1)/2: " << formulaSum << endl;

    return 0;
}

