#include <stdio.h>
/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/
int sum(int*, int*);
int sum(int* x, int* y)
{
    return *x + *y;
}

float Avg(int*, int*);
float Avg(int* a, int* b)
{
    return (*a + *b) / 2.0;
}
int main()
{
    int c = 21, d = 45;
    int *k = &c;
    int *j = &d;
    printf("The value of sum is %d\n", sum(k,j));
    printf("The value of Average is %.2f\n", Avg(k,j));
    return 0;
}