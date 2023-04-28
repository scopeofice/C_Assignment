// Write a function isPrime, which accepts an integer as parameter and returns 1 if the number
// is prime and 0 otherwise. Use this function in main to display the first 10 prime numbers.

#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int count = 0;
    int num = 2;
    while (count < 10) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}
