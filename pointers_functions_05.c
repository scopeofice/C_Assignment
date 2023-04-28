// Write a function power, which calculates x raised to y.
// Write another function, which calculates n! Using for loop.
// Use these functions to calculate the sum of first n terms of the Taylor series: 
//  sin(x) = x - 3! 3 x + 5! 5 x + ……

#include <stdio.h>

// Function to calculate x raised to y
double power(double x, int y) {
    double result = 1.0;
    int i;
    for (i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

// Function to calculate n!
int factorial(int n) {
    int result = 1;
    int i;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, i;
    double x, term, sum = 0.0;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        term = power(x, 2*i - 1) / factorial(2*i - 1);
        if (i % 2 == 0) {
            term = -term;
        }
        sum += term;
    }

    printf("The sum of the first %d terms of the series is: %lf\n", n, sum);

    return 0;
}
