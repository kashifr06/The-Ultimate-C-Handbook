#include <stdio.h>

int main()
{
    int a = 1, b = 1;
    printf("The value of a and b is %d\n", a && b);
    printf("The value of a and b is %d\n", a || b);
    printf("The value of a and b is %d\n", a && !b);

    if (a && b)
    {
        printf("both are true\n");
    }

    if (a)
    {
        if (b)
        {
            printf("both are true\n");
        }
    }

    return 0;
}