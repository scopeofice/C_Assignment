// Write a recursive function to calculate the sum of digits of a number till you get a
// single digit number. Example: 961 -> 16 -> 7. (Note: Do not use a loop)

#include <stdio.h>

int sum_digits(int n) {
    // Base case: if n is a single digit number, return it
    if (n < 10) {
        return n;
    }
    // Recursive case: sum the digits of n and call the function with the sum
    int sum = n % 10;
    if (n >= 10) {
        sum += sum_digits(n / 10);
    }
    return sum_digits(sum);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of digits of %d is %d\n", n, sum_digits(n));
    return 0;
}

