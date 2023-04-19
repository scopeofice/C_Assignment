// Write a program to accept an array of n elements and a number say key.
// Check whether key is present in the array or not.
#include <stdio.h>
int main(){
    int i, n, key, flag;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Key found at index %d\n", i);
    } 
    else 
    {
        printf("Key not found in the array\n");
    }
    return 0;
}
    