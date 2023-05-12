// Write a program which accepts a sentence from the user and alters it as follows:
// Every space is replaced by *, case of all alphabets is reversed, digits are replaced by?
#include <stdio.h>
#define MAX_LENGTH 100
int main() {
    char sentence[MAX_LENGTH], modified[MAX_LENGTH];
    int i, j;
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin);
    for (i = 0, j = 0; sentence[i] != '\0'; i++, j++)
    {
        if (sentence[i] == ' ')
        {
            modified[j] = '*';
        } else if (sentence[i] >= '0' && sentence[i] <= '9')
        {
            modified[j] = '?';
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            modified[j] = sentence[i] - 32;
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            modified[j] = sentence[i] + 32;
        } else
        {
            modified[j] = sentence[i];
        }
    }
    modified[j] = '\0';
    printf("Modified sentence: %s\n", modified);
    return 0;
}