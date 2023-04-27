// Write a program to calculate factorial of a number. 
// For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120
#include <stdio.h>
int main(){
    int num, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact *= i; 
    }
     printf("%d",fact);
     return 0;    
}