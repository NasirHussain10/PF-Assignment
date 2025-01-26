#include <iostream>
using namespace std;

struct Student {
    int studentID;
    char studentName[50];
    float studentGPA;
    float studentPercentage;
    int marks[5];
};

int calculateTotalMarks(Student s) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += s.marks[i];
    }
    return total;
}

int main() {
    Student s;
    cout << "Enter Student ID: ";
    cin >> s.studentID;
    cout << "Enter Student Name: ";
    cin >> s.studentName;
    cout << "Enter Student GPA: ";
    cin >> s.studentGPA;
    cout << "Enter Student Percentage: ";
    cin >> s.studentPercentage;
    
    cout << "Enter 5 marks: ";
    for (int i = 0; i < 5; i++) {
        cin >> s.marks[i];
    }
    
    int totalMarks = calculateTotalMarks(s);
    cout << "Total Marks: " << totalMarks << endl;
    
    return 0;
}

