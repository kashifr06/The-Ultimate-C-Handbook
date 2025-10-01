#include <stdio.h>
/* Write a function and pass the value by reference */
int multiply(int*);
int multiply(int* x)
{   
    *x=7;
    return *x * 10;
}
int main()
{
    int a = 5;
   a= multiply(&a);
    printf("The new value of a is %d\n", a);

        return 0;
}