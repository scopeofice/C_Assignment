// Write a program to accept a decimal number and convert it to binary.
#include <stdio.h>

int main() {
    int decimal, binary[32], j, i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    for (i = 0; decimal > 0; i++)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
    }
    printf("Binary number: ");
    for (j = i-1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}
