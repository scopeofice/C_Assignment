// Write a recursive function to calculate the nth Fibonacci number.
// Use this function in main to display the first n Fibonacci numbers. 
//  The recursive definition of nth Fibonacci number is as follows: 
//  fib(n) = 0 if n = 1
//  = 1 if n = 2
//  = fib(n-2) + fib(n-1) if n>2

#include <stdio.h>

int fibonacci(int n) {
    // Base cases: fib(0) = 0, fib(1) = 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Recursive case: fib(n) = fib(n-2) + fib(n-1)
    return fibonacci(n-2) + fibonacci(n-1);
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to display: ");
    scanf("%d", &n);
    printf("The first %d Fibonacci numbers are:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}