// Write a menu driven program to perform the following operations on strings using standard library 
// functions: Length, Copy, Concatenation, Compare, Reverse, Uppercase, Lowercase, Check case.
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100 // maximum length of each string

int main() {
    char string1[MAX_LENGTH], string2[MAX_LENGTH], result[MAX_LENGTH];
    int choice, length;
    char c;

    do {
        // display menu
        printf("\nMenu:\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenation\n");
        printf("4. Compare\n");
        printf("5. Reverse\n");
        printf("6. Uppercase\n");
        printf("7. Lowercase\n");
        printf("8. Check case\n");
        printf("9. Exit\n");

        // accept user's choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Length
                printf("Enter a string: ");
                scanf("%s", string1);
                length = strlen(string1);
                printf("The length of the string is: %d\n", length);
                break;

            case 2:
                // Copy
                printf("Enter a string: ");
                scanf("%s", string1);
                strcpy(result, string1);
                printf("The copied string is: %s\n", result);
                break;

            case 3:
                // Concatenation
                printf("Enter the first string: ");
                scanf("%s", string1);
                printf("Enter the second string: ");
                scanf("%s", string2);
                strcat(string1, string2);
                printf("The concatenated string is: %s\n", string1);
                break;

            case 4:
                // Compare
                printf("Enter the first string: ");
                scanf("%s", string1);
                printf("Enter the second string: ");
                scanf("%s", string2);
                if (strcmp(string1, string2) == 0) {
                    printf("The strings are equal\n");
                } else {
                    printf("The strings are not equal\n");
                }
                break;

            case 5:
                // Reverse
                printf("Enter a string: ");
                scanf("%s", string1);
                strrev(string1);
                printf("The reversed string is: %s\n", string1);
                break;

            case 6:
                // Uppercase
                printf("Enter a string: ");
                scanf("%s", string1);
                for (int i = 0; string1[i] != '\0'; i++) {
                    if (string1[i] >= 'a' && string1[i] <= 'z') {
                        result[i] = string1[i] - 32;
                    } else {
                        result[i] = string1[i];
                    }
                }
                printf("The uppercase string is: %s\n", result);
                break;

            case 7:
                // Lowercase
                printf("Enter a string: ");
                scanf("%s", string1);
                for (int i = 0; string1[i] != '\0'; i++) {
                    if (string1[i] >= 'A' && string1[i] <= 'Z') {
                        result[i] = string1[i] + 32;
                    } else {
                        result[i] = string1[i];
                    }
                }
                printf("The lowercase string is: %s\n", result);
                break;

            case 8:
                // Check case
                printf("Enter a character: ");
                scanf(" %c", &c);
                if (c >= 'a' && c <= 'z') {
                printf("The character is in lowercase\n");
                } else if (c >= 'A' && c <= 'Z') {
                printf("The character is in uppercase\n");
                } else {
                printf("The character is not an alphabet\n");
                }
                break;
            case 9:
                printf("Exiting the program\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 9);
    return 0;
}