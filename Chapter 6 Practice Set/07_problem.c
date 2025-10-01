#include <stdio.h>
/*Try problem 3 using call by value and verify that it does not change the value of
the said variable.*/
int multiply(int);
int multiply(int x)
{
    return x * 10;
}
int main(){

   int a = 5;
   multiply(a);
   printf("The value of a is still %d\n", a);

    return 0;
}