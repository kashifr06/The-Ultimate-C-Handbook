#include <stdio.h>

int sum(int, int);

int sum(int a, int b)
{   
   //Sum function cannot change x uning a because copy of x is provided to sum in a
    return a + b;
}

int main()
{
    int x = 6, y = 7;
    printf("The sum of the given number is %d\n", sum(x, y));

    return 0;
}