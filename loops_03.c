// Write a program to accept a character, an integer n and display the next n characters.

#include <stdio.h>
int main(){
    int n, i;
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("Enter the number of charcaters to display: ");
    scanf("%d",&n);
    printf("Next %d characters are: ",n);

    for (i = 1; i <= n; i++)
    {
        printf("%c ",ch+i);
    }
    return 0;
}