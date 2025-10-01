#include <stdio.h>

int sum(int*,int*);

int sum(int* a,int* b)
{   
    *a=11;
    return (*a + *b);
}

int main()
{
    int x = 6, y = 7;
    printf("The sum of the given number is %d\n", sum(&x,&y));
    printf("The value of a is %d\n",x);

    return 0;
}