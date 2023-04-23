// Create a class Person with data members as name, age, city.
// Write getters and setters for all the data members.
// Also add the display function. Create Default and Parameterized constructors. Create the object 
// of this class in main method and invoke all the methods in that class.

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string city;
public:
    // Default constructor
    Person() {
        name = "";
        age = 0;
        city = "";
    }

    // Parameterized constructor
    Person(string n, int a, string c) {
        name = n;
        age = a;
        city = c;
    }

    // Getters
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCity() {
        return city;
    }

    // Setters
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setCity(string c) {
        city = c;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }
};

int main() {
    // Create a default person object
    Person p1;

    // Use setters to set data members
    p1.setName("John");
    p1.setAge(25);
    p1.setCity("New York");

    // Display person information using getters and display function
    cout << "Person 1 information:" << endl;
    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge() << endl;
    cout << "City: " << p1.getCity() << endl;
    p1.display();

    // Create a parameterized person object
    Person p2("Jane", 30, "London");

    // Display person information using getters and display function
    cout << "Person 2 information:" << endl;
    cout << "Name: " << p2.getName() << endl;
    cout << "Age: " << p2.getAge() << endl;
    cout << "City: " << p2.getCity() << endl;
    p2.display();

    return 0;
}
