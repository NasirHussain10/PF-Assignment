#include <iostream>
using namespace std;

int main() {
    int start, end;
    long long product = 1; 
    
    cout << "Enter Your Starting Number: " << endl;
    cin >> start;
    
    cout << "Enter Your Ending Number: " << endl;
    cin >> end;
    
    cout << "The even numbers are: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cout << i << " , ";
        }
    }
    
    cout << "\nThe odd numbers are: ";
    for (int j = start; j <= end; j++) {
        if (j % 2 != 0) {
            cout << j << " , ";
            product *= j;
        }
    }
    
    cout << "\nThe product of odd numbers is: " << product << endl;
    
    return 0;
}

