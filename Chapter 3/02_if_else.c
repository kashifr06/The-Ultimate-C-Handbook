#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if (age > 10)
    {
        printf("Your age is greater than 10 \n");
    }
    else
    {
        printf("Your age is less than 10\n");
    }

    return 0;
}