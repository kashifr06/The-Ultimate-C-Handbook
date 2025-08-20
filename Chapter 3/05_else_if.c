#include <stdio.h>

int main()
{
    int age = 90;
    if (age > 60)
    {
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age > 20)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }

    return 0;
}