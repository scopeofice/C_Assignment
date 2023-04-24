// Create Employee class with members id(int),name(string),dob(Date).Use above created Date class. 
// Write default and parameterized constructor in Employee Class.Write accept () function to accept 
// information and display () to display emp information.

#include <iostream>
#include <string>
using namespace std;

// Date class
class Date {
    private:
        int day, month, year;
    public:
        Date() {
            day = 1;
            month = 1;
            year = 2000;
        }

        Date(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }

        void display() {
            cout << day << "/" << month << "/" << year << endl;
        }
};

// Employee class
class Employee {
    private:
        int id;
        string name;
        Date dob;
    public:
        Employee() {
            id = 0;
            name = "";
            dob = Date();
        }

        Employee(int i, string n, Date d) {
            id = i;
            name = n;
            dob = d;
        }

        void accept() {
            cout << "Enter Employee ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, name);

            cout << "Enter Employee Date of Birth (dd mm yyyy): ";
            int d, m, y;
            cin >> d >> m >> y;
            dob = Date(d, m, y);
        }

        void display() {
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Date of Birth: ";
            dob.display();
        }
};

int main() {
    Employee emp1; // object initialized using no argument constructor
    emp1.accept();
    emp1.display();

    Employee emp2(1001, "John Doe", Date(1, 2, 1990)); // object initialized using parameterized constructor
    emp2.display();

    return 0;
}
