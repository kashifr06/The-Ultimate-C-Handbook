#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    printf("The value of first %d natural number\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("The value of i is %d\n", i);
    }
    return 0;
}