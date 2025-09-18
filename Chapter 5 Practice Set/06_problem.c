#include <stdio.h>

/*Write a recursive function to calculate the sum of first ‘n’ natural numbers*/

int Natural_numbers(int);

int Natural_numbers(int n)
{
    if (n == 1)
        return 1;

    else
    {
        return Natural_numbers(n - 1) + n;
    }
}

int main()
{
    int a = 15;
    printf("The sum of first %d natural numbers is %d\n", a, Natural_numbers(a));

    return 0;
}