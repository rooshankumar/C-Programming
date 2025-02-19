#include <stdio.h>

int main( )
{
    float far;
    printf("Enter the temperature of city in Fahrenheit :- ");
    scanf ("%f", &far);
    printf("Temperature of city in centigrade is %f degree", ((far-32)*5)/9);
}