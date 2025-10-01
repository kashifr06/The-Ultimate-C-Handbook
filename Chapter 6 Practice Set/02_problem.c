#include <stdio.h>
void display_address(int *);
void display_address(int *x)
{
    printf("The address of variable inside function is %p\n", (void *)x);
}
int main()
{
    int i = 17;
    int *b = &i;
    printf("The address of i is %p\n", &i);
    display_address(&i);
    // The value of address will not change because in this program you are passing the address of i
    return 0;
}