/*

Accept the basic salary of an employee and compute the net salary after adding earnings and
subtracting deductions.
PF is 2 % of basic
Tax is 3 % of basic
HRA is 5 % basic
DA is 8 % of basic

*/

#include<stdio.h>
int main(){
    float basic, PF, Tax, HRA, DA, net_salary;
    printf("Enter the basic salary of the employee\n");
    scanf("%f",&basic);

    //Calculating PF
    PF = 0.02*basic;

    //Calculating Tax
    Tax = 0.03*basic;

    //Calculating HRA
    HRA = 0.05*basic;

    //Calculating DA
    DA = 0.08*basic;

    //Calculating Net Salary
    net_salary = basic + DA + HRA - PF - Tax;

    printf("Net Salary of the employee is\n%0.2f",net_salary);

    return 0;
}