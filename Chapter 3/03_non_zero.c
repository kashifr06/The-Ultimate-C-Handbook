#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This if it executed!\n");
    }
    if (2345)
    {
        printf("This if it executed!\n");
    }
    if (2.75)
    {
        printf("This if it executed!\n");
    }
    if ('K')
    {
        printf("This Character inside if it executed!\n");
    }
    if (0)
    {
        printf("I am zero - I am not executed!\n");
    }
    return 0;
}