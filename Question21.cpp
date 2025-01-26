#include <iostream>
using namespace std;

struct Student {
    int studentID;
    char studentName[50];
    float studentGPA;
    int marks[7];
};

Student student1;

void displayData(Student s1, Student s2) {
    cout << "Student 1 ID: " << s1.studentID << endl;
    cout << "Student 1 Name: " << s1.studentName << endl;
    cout << "Student 1 GPA: " << s1.studentGPA << endl;
    cout << "Student 1 Marks: ";
    for(int i = 0; i < 7; i++) {
        cout << s1.marks[i] << " ";
    }
    cout << endl;

    cout << "Student 2 ID: " << s2.studentID << endl;
    cout << "Student 2 Name: " << s2.studentName << endl;
    cout << "Student 2 GPA: " << s2.studentGPA << endl;
    cout << "Student 2 Marks: ";
    for(int i = 0; i < 7; i++) {
        cout << s2.marks[i] << " ";
    }
    cout << endl;
}

int main() {
    Student student2 = {1002, "Alice", 3.8, {85, 90, 88, 76, 91, 84, 87}};
    student1 = {1001, "Bob", 3.5, {78, 82, 80, 70, 79, 76, 85}};
    displayData(student1, student2);
    return 0;
}

