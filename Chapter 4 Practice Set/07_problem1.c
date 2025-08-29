#include <stdio.h>

int main()
{
    /*Write a program to calculate the factorial of a given number using a for loop*/
    int i, n, factorial = 1;

    printf("Enter a number to find its factorial \n ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("The factorial of given number is %d\n", factorial);

    return 0;
}