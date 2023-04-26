// Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>
int main(){
    float A1, A2, A3;
    printf("Enter angles:\n");
    scanf("%f\n%f\n%f", &A1, &A2, &A3);

    if (A1+A2+A3 == 180)
    {
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
    return 0;
}