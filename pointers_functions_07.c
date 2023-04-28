// Write a recursive C function to calculate x raised to y. (Do not use standard library function)

#include <stdio.h>

// Recursive function to calculate x raised to y
double power(double x, int y) {
    if (y == 0) {
        return 1.0;
    } else if (y % 2 == 0) {
        double half = power(x, y/2);
        return half * half;
    } else {
        double half = power(x, (y-1)/2);
        return x * half * half;
    }
}

int main() {
    double x, result;
    int y;

    printf("Enter a number: ");
    scanf("%lf", &x);
    printf("Enter an integer exponent: ");
    scanf("%d", &y);

    result = power(x, y);

    printf("%0.2lf raised to the power of %d is %0.2lf.\n", x, y, result);

    return 0;
}
