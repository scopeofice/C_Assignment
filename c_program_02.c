//Accept a character from user and display ASCII value of it.

#include<stdio.h>
int main(){
  char ch;
  printf("Enter the character - ");
  scanf("%c",&ch);
  printf("ASCII value of the character is - %d", ch);
  return 0;
}