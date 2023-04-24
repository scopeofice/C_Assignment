// Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized 
// constructors. Write getters and setters for all the data members. Also add the display function. Create 
// the object of this class in main method and invoke all the methods in that class.

#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real, imaginary;

public:
    ComplexNumber() {
        real = 0;
        imaginary = 0;
    }

    ComplexNumber(double r, double i) {
        real = r;
        imaginary = i;
    }

    double getReal() {
        return real;
    }

    double getImaginary() {
        return imaginary;
    }

    void setReal(double r) {
        real = r;
    }

    void setImaginary(double i) {
        imaginary = i;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // create a default complex number object
    ComplexNumber c1;

    // create a complex number object with given real and imaginary parts
    ComplexNumber c2(3.5, -2.8);

    // display the default complex number object
    c1.display();

    // display the complex number object with given real and imaginary parts
    c2.display();

    // change the real and imaginary parts of c1
    c1.setReal(1.2);
    c1.setImaginary(-4.7);

    // display the updated c1 values
    c1.display();

    return 0;
}
