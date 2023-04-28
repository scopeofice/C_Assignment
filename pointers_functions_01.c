// WAP to accept an array of n integers and calculate sum of odd numbers and even numbers using the 
// pointer to an array.

#include <stdio.h>

int main() {
    int n, i, *p, even_sum = 0, odd_sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    p = arr;
    for(i=0; i<n; i++) {
        if(*p % 2 == 0)
            even_sum += *p;
        else
            odd_sum += *p;
        p++;
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}
