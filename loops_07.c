// Write a menu driven program to do following operations :
// a) Compute area of circle
// b) Compute area of rectangle
// c) Compute area of triangle
// d) Exit
// Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
// operation. Continue this process until user selects exit option.

#include <stdio.h>
int main(){
    int choice;
    float radius, length, width, base, height, area;
    do
    {
        printf("Enter your choice:\n");
        printf("1.Compute area of Circle\n");
        printf("2.Compute area of Rectangle\n");
        printf("3.Compute area of Triangle\n");
        printf("4.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f",&radius);
            area = 3.14 * radius * radius;
            printf("Area of the circle is: %0.2f unit sq\n", area);
            break;
        case 2:
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle is: %0.2f unit sq\n", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle is: %0.2f unit sq\n", area);
            break;
        case 4:
            break;        
        default:
            printf("Invalid choice\n");
            break;
        }
        
    } while (choice != 4);
    return 0;
}