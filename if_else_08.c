//  Write a program to accept 3 numbers and compute minimum and maximum from them.

#include <stdio.h>
int main(){
    float num1, num2, num3;
    float min, max;
    printf("Enter three numbers:\n");
    scanf("%f\n%f\n%f", &num1, &num2, &num3);

    // Let 1st number be both minimum and maximum
    min = num1;
    max = num1;

    if (num2 > num1)
    {
        max = num2;
    }
    if (num2 < num1)
    {
        min = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num3 < min)
    {
        min = num3;
    }

    printf("\nThe minimum value: %0.2f", min);
    printf("\nThe maximum value: %0.2f", max);

 return 0;   
}