// Write a program to accept an integer array and an integer say num and counts the occurrences 
// of the num in the array.
#include <stdio.h>
int main(){
    int num, i, n, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be counted: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    printf("Occurrence of %d in the array is: %d", num, count);
    return 0;
}