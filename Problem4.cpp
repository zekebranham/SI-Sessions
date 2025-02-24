#include <iostream>
using namespace std;
//What it is supposed to do:
//The program asks the user for a number n and calculates its factorial (n!).
//If n < 0, it should print an error message and ask again.
//It should use both a for-loop and a while-loop for different cases.
int main() {
    int n, factorial = 0;
    
    cout << "Enter a number: ";
    cin >> n;

    while (n < 0) {
        cout << "Factorial is not defined for negative numbers. Try again: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
    return 0;
}

