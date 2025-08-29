#include <stdio.h>

int main()
{
    /*Write a program to calculate the factorial of a given number using a for while loop*/
    int i = 1, n, factorial = 1;

    printf("Enter a number to find its factorial \n ");
    scanf("%d", &n);
   do
    {
        factorial = factorial * i;
        i++;
    }
     while (i <= n);
    printf("The factorial of given number is %d\n", factorial);

    return 0;
}