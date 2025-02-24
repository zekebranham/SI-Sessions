#include <iostream>
using namespace std;
//What it is supposed to do:
//This program asks for a starting number and a step size (how much to decrease each time).
//It should count down to 1, ensuring that 1 is always included in the output.
//If the step size is greater than the starting number, it should print an error message.
int main() {
    int num, step;
    cout << "Enter a starting number: ";
    cin >> num;
    cout << "Enter a step size: ";
    cin >> step;

    if (step < 1) {
        cout << "Invalid step size!";
    }

    while (num > 1) {
        cout << num << " ";
        num - step;
    }

    cout << "1 Done!";
    return 0;
}