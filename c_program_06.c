// Accept dimensions of a cylinder and print the surface area and volume 
// (Hint: surface area = 2πrh + 2πr2h, volume = π r 2 h). Define a constant variable pi=3.14.

#include <stdio.h>
#define PI 3.14

int main(){
    int radius, height, surface_area, volume;
    printf("Enter radius\n");
    scanf("%d",&radius);
    printf("Enter height\n");
    scanf("%d",&height);

    int area = PI*radius*radius;

    //Calculating surface area
    surface_area = (2*PI*radius*height) + area;

    //Calculating volume
    volume = area*radius;

    printf("Surface area of the cylinder is = %d unit sq.\n", surface_area);
    printf("Volume of the cylinder = %d unit cube",volume);

    return 0;

}