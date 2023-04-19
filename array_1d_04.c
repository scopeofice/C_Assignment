// Write a program to accept n numbers from the user and store them in an array.
// Then sort the array in descending order and display it.
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
    // Using insertion sorting algorithum
    for(i = 1 ; i < n ; i++)
    {
        int j = i - 1;
        int key = arr[i]; 
        while( j>=0  && key > arr[j])
        {
            arr[j+1] = arr[j]; 
            j--;
        }
        arr[j+1] = key;
    }
    printf("Sorted array in descending order:\n");
    for (i = 0; i < n; i++) {
        printf("%4d", arr[i]);
    }
    return 0;
}