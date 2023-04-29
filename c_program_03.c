// Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the percentage also.

#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    float total;
    float percent;
    printf("Enter the marks of subject 01\n");
    scanf("%f",&m1);
    printf("Enter the marks of subject 02\n");
    scanf("%f",&m2);
    printf("Enter the marks of subject 03\n");
    scanf("%f",&m3);
    printf("Enter the marks of subject 04\n");
    scanf("%f",&m4);
    printf("Enter the marks of subject 05\n");
    scanf("%f",&m5);
    total = m1+m2+m3+m4+m5;
    printf("\nTotal marks = %0.2f", total);
    percent = (total/5);
    printf("\nPercentage = %0.2f%%\n", percent);

    return 0;
}