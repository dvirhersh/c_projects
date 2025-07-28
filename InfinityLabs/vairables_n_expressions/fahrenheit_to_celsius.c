#include <stdio.h>
#include <stdlib.h>

float FahrenheitToCelsius(int fahrenheit)
{
    float celsius = 0;
    celsius = (fahrenheit - 32) * 5.0 / 9;
    return celsius;
}

int main()
{
    unsigned fahrenheit = 34;

    printf("in celsius = %f\n", FahrenheitToCelsius(fahrenheit));

    return 0;
}
