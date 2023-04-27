// Write a program that accepts numbers continuously as long as the number is positive and
// prints the sum of the given numbers.

#include <stdio.h>
int main(){
    int num, sum=0;
    while (1)
    {
        printf("Enter a positive number (enter a negative number to stop): ");
        scanf("%d",&num);
        if (num < 0)
        {
            break;
        }
        sum += num;
    }
    printf("Sum of the given numbers is: %d", sum);

    return 0;
}