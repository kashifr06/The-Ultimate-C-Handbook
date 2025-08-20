#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if (age > 10)
    {
        printf("Your age is greater than 10 \n");
        printf("You can drive\n");
    }
    if (age % 5 == 0)
    {
        printf("Your age is divisible by 5 \n");
    }

    return 0;
}