#include <stdio.h>
/* Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why? */
void address(int *);
void address(int *x)
{
    printf("The address of i is %p\n", (void *)x);
}
int main()
{
    int i = 17;
    int *b = &i;
    printf("The address of i is %p\n", &i);
    address(&i);//The value of address will not change because in this program you are passing the address of i on both places.
    return 0;
}
