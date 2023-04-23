// Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
// getters and setters for all the data members. Also add the display function. Create the object of this 
// class in main method and invoke all the methods in that class.

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void setX(int newX) {
        x = newX;
    }

    void setY(int newY) {
        y = newY;
    }

    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // create a default point object
    Point p1;

    // create a point object with given coordinates
    Point p2(3, 5);

    // display the default point object
    p1.display();

    // display the point object with given coordinates
    p2.display();

    // change the x and y coordinates of p1
    p1.setX(1);
    p1.setY(2);

    // display the updated p1 coordinates
    p1.display();

    return 0;
}
