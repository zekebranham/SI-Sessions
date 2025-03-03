#include <iostream>
using namespace std;
//1
void calculateArea() {
    int width, height;
    cout << "Enter width and height: ";
    cin >> width; 
    int area = width * height; 
    cout << "The area is: " << area << endl;
}

int main() {
    int result;
    result = 7 / 2; 
    cout << "7 / 2 = " << result << endl;

    calculateArea();
    return 0;
}




//2
#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    
    cout << "Enter your name and age: ";
    cin >> name >> age;

    if (age = 18 || age > 21) {
        cout << "Welcome, " << name << "! You may enter.\n";
    } else {
        cout << "Sorry, access denied.\n";
    }

    string password = "OpenSesame";
    string userInput;
    
    cout << "Enter password: ";
    cin >> userInput;
    
    if (userInput == password) { 
        cout << "Access granted!\n";
    } else {
        cout << "Access denied!\n";
    }

    return 0;
}



//3
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Menu:\n1. Print Hello\n2. Print Goodbye\n3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Hello!\n";
        case 2:
            cout << "Goodbye!\n";
            break;
        case 3:
            cout << "Exiting program...\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
    }

    int i = 1;
    while (i < 5); { 
        cout << "Counting: " << i << endl;
        i++;
    }

    return 0;
}


//4
#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color myColor = 2; 
    
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j <= 2; j++) { 
            cout << "Iteration: " << i << ", " << j << endl;
        }
    }

    return 0;
}

