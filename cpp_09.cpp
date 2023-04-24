// Consider that payroll software needs to be developed for computerization of operations of an ABC 
// organization. The organization has employees.
// 9.1. Construct a class Employee with following members using private access specifies:
// Employee Id integer
// Employee Name string
// Basic Salary double
// HRA double
// Medical double=1000
// PF double
// PT double
// Net Salary double
// Gross Salary double
// Please use following expressions for calculations: //Note: Don’t accept HRA,PF PT from user
// * HRA = 50% of Basic Salary
// * PF = 12% of Basic Salary
// * PT = Rs. 200
// 9.2. Write methods to display the details of an employee and calculate the gross and net salary.
// * Goss Salary = Basic Salary + HRA + Medical
// * Net Salary = Gross Salary – (PT + PF)
// 9.3 Create Object of employee class and assign values and display Details.

#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string empName;
    double basicSalary;
    double hra;
    double medical = 1000;
    double pf;
    double pt = 200;
    double netSalary;
    double grossSalary;
public:
    Employee() {} // default constructor

    Employee(int id, string name, double salary) { // parameterized constructor
        empId = id;
        empName = name;
        basicSalary = salary;
        hra = 0.5 * basicSalary;
        pf = 0.12 * basicSalary;
        grossSalary = basicSalary + hra + medical;
        netSalary = grossSalary - (pt + pf);
    }

    void displayDetails() {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "Medical: " << medical << endl;
        cout << "PF: " << pf << endl;
        cout << "PT: " << pt << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    // Creating object of Employee class and assigning values
    Employee emp1(101, "John Doe", 50000);

    // Displaying employee details
    emp1.displayDetails();

    return 0;
}
