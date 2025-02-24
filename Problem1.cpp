#include <iostream>
using namespace std;

//What it is supposed to do:
//The program asks the user for a positive integer and calculates the sum of all numbers
// up to that number that are multiples of 4.It should also count how many multiples of 4 exist and print both the count and sum.
int main() {
    int limit, sum = 0, count = 0;
    cout << "Enter a positive number: ";
    cin >> limit;

    for (int i = 1; i < limit; i++); {
        if (i % 4 == 0) {
            sum += i;
            count++;
        }
    }
    
    cout << "Sum of multiples of 4: " << sum << endl;
    cout << "Total count: " << count << endl;

    if (count == 0)
        cout << "No multiples of 4 found!" << endl;
    
    return 0;
}

