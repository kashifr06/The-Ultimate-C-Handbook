#include <stdio.h>

int main()
{
    /*Write a program to check whether a given number is prime or not using loops*/
    int i, n, its_prime = 1;

    printf("Enter a number to find whether a given number is prime or not  \n ");
    scanf("%d", &n);
    if (n <= 1)
    {
        its_prime = 0;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            its_prime = 0;
            break;
        }
    }
    if (its_prime == 0)
    {

        printf("Given number is not prime\n");
    }

    else
    {
        printf("Given number is prime\n");
    }

    return 0;
}