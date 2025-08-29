#include <stdio.h>

int main()
{
    /*Write a program to find greatest of four numbers entered by the user.*/
    int a, b, c, d;
    printf("Enter First Number \n",a);
    scanf("%d", &a);
    printf("Enter Second Number \n",b);
    scanf("%d", &b);
    printf("Enter Third Number \n",c);
    scanf("%d", &c);
    printf("Enter Fourth Number \n",d);
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("First Number is Greatest\n");
    }
    else if (b > a && b > c && b > d)
    {
        printf("Second Number is Greatest\n");
    }
    else if (c > b && c > a && c > d)
    {
        printf("Third Number is Greatest\n");
    }
    else if (d > b && d > c && d > a)
    {
        printf("Fourth Number is Greatest\n");
    }

    return 0;
}