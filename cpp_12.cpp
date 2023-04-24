// Create an abstract class Shape with pure virtual method area;
// Create Rectangle, Circle, Square class. Inherit them from Shape class. Override area method.
// Test these all classes by creating object of respective class.

#include <iostream>

using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function to calculate area
    virtual double area() = 0;
};

// Rectangle class
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Override area method to calculate area of rectangle
    double area() {
        return length * width;
    }
};

// Circle class
class Circle : public Shape {
private:
    double radius;
public:
    // Constructor to initialize radius
    Circle(double r) {
        radius = r;
    }

    // Override area method to calculate area of circle
    double area() {
        return 3.14 * radius * radius;
    }
};

// Square class
class Square : public Shape {
private:
    double side;
public:
    // Constructor to initialize side
    Square(double s) {
        side = s;
    }

    // Override area method to calculate area of square
    double area() {
        return side * side;
    }
};

// Main function to test the classes
int main() {
    Shape* shape1 = new Rectangle(4, 5);
    Shape* shape2 = new Circle(3);
    Shape* shape3 = new Square(2);

    cout << "Area of rectangle: " << shape1->area() << endl;
    cout << "Area of circle: " << shape2->area() << endl;
    cout << "Area of square: " << shape3->area() << endl;

    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}
