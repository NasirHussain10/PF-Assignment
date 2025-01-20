#include <iostream>
using namespace std;

int main() {
    int start, end;
    long long oddProduct = 1;
    bool oddFound = false;  // Flag to track if any odd number is found

    // Input starting and ending numbers
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    // Printing even numbers between start and end
    cout << "Even numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cout << i << ", ";
        }
    }
    cout << endl;

    // Calculate the product of odd numbers between start and end
    cout << "Product of odd numbers between " << start << " and " << end << " is:" << endl;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
        	cout<<i<<"*";
            oddProduct *= i;
            oddFound = true;  // Set flag if an odd number is found
        }
    }

    // If any odd number was found, print the product
    if (oddFound) {
        cout <<endl<< oddProduct << endl;
    } else {
        cout << "No odd numbers found." << endl;
    }

    return 0;
}

