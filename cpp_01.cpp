// Write a program to create student class with data members rollno, marks1, mark2, mark3.
// Accept data (acceptInfo()) and display using display member function.
// Also display total, percentage and grade.

#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    int marks1;
    int marks2;
    int marks3;
public:
    void acceptInfo() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks in subject 1: ";
        cin >> marks1;
        cout << "Enter marks in subject 2: ";
        cin >> marks2;
        cout << "Enter marks in subject 3: ";
        cin >> marks3;
    }

    void display() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks in subject 1: " << marks1 << endl;
        cout << "Marks in subject 2: " << marks2 << endl;
        cout << "Marks in subject 3: " << marks3 << endl;
        int total = marks1 + marks2 + marks3;
        float percentage = (float)total / 3.0;
        printf("Total marks: %d\n", total);
        printf("Percentage: %.2f%%\n", percentage);
        if (percentage >= 80.0) {
            cout << "Grade: A" << endl;
        } else if (percentage >= 60.0) {
            cout << "Grade: B" << endl;
        } else if (percentage >= 40.0) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Grade: F" << endl;
        }
    }
};

int main() {
    Student s;
    s.acceptInfo();
    s.display();
    return 0;
}
