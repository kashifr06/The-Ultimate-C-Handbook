#include <stdio.h>
/* Write a program to change the value of a variable to ten times of its current
value. */
int multiply(int);
int multiply(int x)
{
    return x * 10;
}
int main()
{
    int a = 5;
   a= multiply(a);
    printf("The new value of a is %d\n", a);

        return 0;
}