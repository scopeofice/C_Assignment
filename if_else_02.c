//  Write a program to accept a number and check if it is divisible by 5 and 7.

#include <stdio.h>

int main(){
    int num;
     printf("Enter the number ");
    scanf("%d",&num);

    if (num%5 == 0 && num%7 == 0)
    {
            printf("The number is divisible by 5 and 7");
    }
    else
        printf("The number is not divisible by 5 and 7");
    return 0;
}
