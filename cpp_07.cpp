// Create Date class with members day, month, year. Write no argument and parameterized constructor. 
// Create two object s and initialize them using no argument and parameterized constructor respectively. 
// Print date using display function.

#include <iostream>
using namespace std;

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
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        }
};

int main() {
    Date s1; // object initialized using no argument constructor
    Date s2(5, 10, 2022); // object initialized using parameterized constructor

    s1.display();
    s2.display();

    return 0;
}
