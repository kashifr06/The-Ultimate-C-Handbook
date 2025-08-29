#include <stdio.h>

int main()
{
    int n = 8, i, sum = 0;
    printf("Enter the number to get its multiplication table is \n ", n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", i, n, i * n);
        sum = sum + i*n;
    }
    printf("The sum of the numbers occurring in the multiplication table of 8 is %d\n ", sum);

    return 0;
}