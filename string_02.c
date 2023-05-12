// Write a program that accepts n strings and displays the longest string. Use array of strings.
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 // maximum length of each string
#define MAX_STRINGS 10 // maximum number of strings

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH]; // array of strings
    int n, i;
    int max_length = 0; // length of the longest string
    char max_string[MAX_LENGTH]; // longest string

    // accept number of strings from the user
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // accept strings from the user
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", strings[i]);
        int length = strlen(strings[i]);
        if (length > max_length) { // check if the current string is longer than the current max string
            max_length = length;
            strcpy(max_string, strings[i]);
        }
    }

    // display the longest string
    printf("The longest string is: %s\n", max_string);

    return 0;
}
