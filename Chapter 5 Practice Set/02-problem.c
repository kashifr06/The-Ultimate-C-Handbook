#include <stdio.h>

// Write a function to convert Celsius temperature into Fahrenheit
// °F=(9/5​×°C)+32

float Celsius(int);

float Celsius(int x)
{
    return (x*9.0/5.0) + 32.0;
}

int main()
{
    int a = 100;
    printf("Fahrenheit of %d degree celsius is %.2f\n",a, Celsius(a));

    return 0;
}