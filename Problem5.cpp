#include <iostream>
using namespace std;
//What it is supposed to do:
//The program asks the user to input 10 numbers and determines which is the largest even number.
//It should print the largest even number found or a message if no even number exists.
int main() {
    int num, largest;
    cout << "Enter 10 numbers: ";

    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num % 2 == 0 && num > largest) {
            largest = num;
        }
    }

    cout << "Largest even number: " << largest << endl;
    return 0;
}
