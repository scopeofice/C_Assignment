//Accept the radius from user and compute the area and circumference of a circle.
#include <stdio.h>
#define PIE 3.14f

void main(){
    int r;
    printf("Enter the Radius.");
    scanf("%d",&r);
    printf("Area of the circle is - %0.2f\n",PIE*r*r);
    printf("Circumference of the circle is - %0.2f",2*PIE*r);
}