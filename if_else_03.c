/* 

Write a program, which accepts annual basic salary of an employee and calculates and displays the 
Income tax as per the following rules. 
Basic: < 1, 50,000 Tax = 0
 1, 50,000 to 3,00,000 Tax = 20% 
 > 3,00,000 Tax = 30%
 
 */

#include<stdio.h>
int main(){
    float salary, tax;
    printf("Enter the basic salary of the employee\n");
    scanf("%f",&salary);

    if (salary < 150000)
    {
        tax = 0;
    }
    else if (salary >= 150000 && salary <= 300000)
    {
        tax = 0.02 * salary;
    }
    else{
        tax = 0.03 * salary;
    }
    
        printf("Income tax = %0.2f", tax);

        return 0;
    
}