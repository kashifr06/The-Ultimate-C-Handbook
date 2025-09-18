#include <stdio.h>

/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
 earth. Consider g = 9.8m/s2*/
// Force=g*mass

float mass(int);

float mass(int x)
{
    return (x * 9.8);
}

int main()
{
    int a = 40;
    printf("Force of attraction on a body of mass %d exerted by earth is %.2f\n", a, mass(a));

    return 0;
}