#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number to get its multiplication table\n ", n);
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", i, n, i * n);
    }

    return 0;
}