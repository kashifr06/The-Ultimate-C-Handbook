#include <stdio.h>
/*Write a program using function to find average of three numbers*/
float average(float, float, float);

float average(float x, float y, float z)
{
    return (x + y + z) / 3.0;
}

int main()
{
    float a = 10, b = 16, c = 15;
    printf("The average of three number is %.2f\n", average(a,b,c));
    return 0;
}