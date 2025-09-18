#include <stdio.h>

/*Write a program using function to print the following pattern (first n lines)
 *
 * * *
 * * * * *     */
// 2n-1

void pattern(int);

void pattern(int n)
{
    for (int i = 1; i <= n; i++) // loop for lines
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a = 5;
    printf("The following pattern (first %d lines) is \n", a);
    pattern(a);

    return 0;
}