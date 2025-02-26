1. Basic User Greeting
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "! Welcome to the program." << endl;
    return 0;
}

2. Simple Calculator
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << num1 + num2 << endl;
    return 0;
}

    
3. Even or Odd Checker
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
    return 0;
}


4. Number Guessing Game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    int secretNumber = rand() % 10 + 1;
    int guess;
    
    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess == secretNumber) {
        cout << "Correct! You guessed the number!" << endl;
    } else {
        cout << "Wrong! The number was " << secretNumber << "." << endl;
    }

    return 0;
}


