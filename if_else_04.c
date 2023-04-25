/*

Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
(Hint: a, e, i, o, u are vowels)

*/

#include <stdio.h>
int main(){
    char ch;
    printf("Enter a lower case character\n");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The character is a vowel");
    }
    else{
        printf("The character is a consonant");
    }
    return 0;
}
