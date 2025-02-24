#include <iostream>
using namespace std;
//What it is supposed to do:
//The program uses an enumeration type for weekdays and asks the user to enter a day number (1-7).
//It then prints an activity recommendation based on the selected day.
//It should repeat until the user enters 0.
enum Day { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    Day today;
    int userInput;
    
    do {
        cout << "Enter a day number (1-7) or 0 to quit: ";
        cin >> userInput;

        today = static_cast<Day>(userInput);

        switch (today) {
            case MONDAY: cout << "Start of the week!\n";
            case FRIDAY: cout << "Weekend is near!\n";
            case SUNDAY: cout << "Rest day!\n";
            default: cout << "Enjoy your day!\n";
        }

    } while (userInput != 0);
    
    cout << "Program ended.";
    return 0;
}
