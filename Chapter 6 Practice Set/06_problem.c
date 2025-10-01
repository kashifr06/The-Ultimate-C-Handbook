#include <stdio.h>
/*Write a program to print the value of a variable i by using “pointer to pointer” type
of variable*/
int main()
{
    int i = 6;
    int *j = &i;
    int **k = &j;
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", **k);

    return 0;
}