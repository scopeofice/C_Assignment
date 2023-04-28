// For the following standard functions, write corresponding user defined functions and write a menu 
// driven program to use them. strcat, strcmp, strrev, strupr.

#include <stdio.h>
#include <string.h>

// Function to concatenate two strings
void my_strcat(char str1[], char str2[]) {
    strcat(str1, str2);
}

// Function to compare two strings
int my_strcmp(char str1[], char str2[]) {
    return strcmp(str1, str2);
}

// Function to reverse a string
void my_strrev(char str[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Function to convert a string to uppercase
void my_strupr(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    int choice;
    char str1[100], str2[100];

    do {
        printf("\nMenu\n");
        printf("1. Concatenate two strings\n");
        printf("2. Compare two strings\n");
        printf("3. Reverse a string\n");
        printf("4. Convert a string to uppercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                my_strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if (my_strcmp(str1, str2) == 0) {
                    printf("Strings are equal\n");
                } else {
                    printf("Strings are not equal\n");
                }
                break;

            case 3:
                printf("Enter a string: ");
                scanf("%s", str1);
                my_strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 4:
                printf("Enter a string: ");
                scanf("%s", str1);
                my_strupr(str1);
                printf("Uppercase string: %s\n", str1);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
