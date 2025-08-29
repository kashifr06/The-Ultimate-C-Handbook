#include <stdio.h>

int main()
{
    /*Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user*/
    int year;
    printf("Enter year\n");
    scanf("%d", &year);
    if ((year%4==0&&year%100!=0)||year%400==0)
    {
        printf("Given year is leap year\n");
    }
    else
    {
        printf("Given year is not leap year\n");
    }

    return 0;
}