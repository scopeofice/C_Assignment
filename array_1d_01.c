// Write a program to accept n numbers in an array and display the largest and smallest number.
// Using these values, calculate the range of elements in the array.

#include <stdio.h>
int main(){
    int i, n, largest, smallest, range;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array element: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = smallest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }       
    }
    range = largest - smallest;
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    printf("Range of the elements: %d", range);
    return 0;
}