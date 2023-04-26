// Write a C program to accept a character and invert the case of it.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("Inverted case: %c",ch);
    }else if (ch >= 'A' && ch <= 'Z'){
        ch = ch + 32;
        printf("Inverted case: %c",ch);
    }else {
        printf("Not a character");
    }
    return 0;
}