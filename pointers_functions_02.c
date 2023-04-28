// Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, and 
// 0 otherwise. Use this function in main to accept n numbers and ckeck if they are even or odd.
#include <stdio.h>

int isEven(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");
    for (int i = 0; i < n; i++) {
        if (isEven(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 0; i < n; i++) {
        if (!isEven(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}