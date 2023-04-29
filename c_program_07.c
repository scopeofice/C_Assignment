// Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K)
// (Hint: C=5/9(F-32), K = C + 273.15)

#include <stdio.h>

int main(){
    float C, F, K;
    printf("Enter temprature in Fahrenheit\n");
    scanf("%f",&F);

    // Converting Fahrenheit to Celcius
    C = 5*(F-32)/9;
    printf("Temprature in Celcius = %0.2f\n",C);

    // Converting Fahrenheit to Kelvin
    K = C + 273.15;
    printf("Temprature in Kelvin = %0.2f",K);

    return 0;
}