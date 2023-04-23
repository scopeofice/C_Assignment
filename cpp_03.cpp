// Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data 
// members. Also add the display function. Create Default and Parameterized constructors. Create the 
// object of this class in main method and invoke all the methods in that class.

#include <iostream>
using namespace std;

class Date {
private:
    int dd;
    int mm;
    int yy;
public:
    // Default constructor
    Date() {
        dd = 0;
        mm = 0;
        yy = 0;
    }

    // Parameterized constructor
    Date(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
    }

    // Getters
    int getDay() {
        return dd;
    }

    int getMonth() {
        return mm;
    }

    int getYear() {
        return yy;
    }

    // Setters
    void setDay(int d) {
        dd = d;
    }

    void setMonth(int m) {
        mm = m;
    }

    void setYear(int y) {
        yy = y;
    }

    // Display function
    void display() {
        cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {
    // Create a default date object
    Date d1;

    // Use setters to set data members
    d1.setDay(10);
    d1.setMonth(3);
    d1.setYear(2023);

    // Display date information using getters and display function
    cout << "Date 1 information:" << endl;
    cout << "Day: " << d1.getDay() << endl;
    cout << "Month: " << d1.getMonth() << endl;
    cout << "Year: " << d1.getYear() << endl;
    d1.display();

    // Create a parameterized date object
    Date d2(20, 5, 2022);

    // Display date information using getters and display function
    cout << "Date 2 information:" << endl;
    cout << "Day: " << d2.getDay() << endl;
    cout << "Month: " << d2.getMonth() << endl;
    cout << "Year: " << d2.getYear() << endl;
    d2.display();

    return 0;
}
