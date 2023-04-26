// Write a C program to check whether a entered character is uppercase or lowercase alphabet.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("The character is uppercase");
        }
        else if(ch >= 97 && ch <= 122) {
            printf("The character is lowercase");
        }
        else
        {
            printf("Not a character");
        }
    return 0;
}