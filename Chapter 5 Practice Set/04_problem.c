#include <stdio.h>

/*Write a program using recursion to calculate nth element of Fibonacci series*/

int Fibonacci(int);

int Fibonacci(int n)
{
    if (n == 0) return 0;
       
    else if (n == 1) return 1;
    else{   
    return Fibonacci(n - 1) + Fibonacci(n - 2);}
}

int main()
{
    int a = 1;
    printf("Calculate %d element of Fibonacci series is %d\n", a, Fibonacci(a));

    return 0;
}