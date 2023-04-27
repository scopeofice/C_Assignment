// Write a program to accept two integers x and n and compute x raised to n.

#include <stdio.h>
int main(){
    int x, n, i;
    long long result = 1;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        result *= x;
    }
    printf("Result = %d",result);
    return 0;
}