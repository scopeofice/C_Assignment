// Create a class Book with data members as bname, id, author, price. Write getters and setters for all the 
// data members. Also add the display function. Create Default and Parameterized constructors. Create 
// the object of this class in main method and invoke all the methods in that class.

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bname;
    int id;
    string author;
    double price;

public:
    // Default constructor
    Book() {
        bname = "";
        id = 0;
        author = "";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string name, int bookId, string bookAuthor, double bookPrice) {
        bname = name;
        id = bookId;
        author = bookAuthor;
        price = bookPrice;
    }

    // Getters
    string getBname() {
        return bname;
    }

    int getId() {
        return id;
    }

    string getAuthor() {
        return author;
    }

    double getPrice() {
        return price;
    }

    // Setters
    void setBname(string name) {
        bname = name;
    }

    void setId(int bookId) {
        id = bookId;
    }

    void setAuthor(string bookAuthor) {
        author = bookAuthor;
    }

    void setPrice(double bookPrice) {
        price = bookPrice;
    }

    // Display function
    void display() {
        cout << "Book Name: " << bname << endl;
        cout << "Book ID: " << id << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Creating an object of Book class
    Book book1("The Alchemist", 101, "Paulo Coelho", 9.99);

    // Using getters to display the details
    cout << "Book Name: " << book1.getBname() << endl;
    cout << "Book ID: " << book1.getId() << endl;
    cout << "Author: " << book1.getAuthor() << endl;
    cout << "Price: " << book1.getPrice() << endl;

    // Using display function to display the details
    book1.display();

    // Using setters to modify the details
    book1.setPrice(7.99);
    book1.display();

    return 0;
}
