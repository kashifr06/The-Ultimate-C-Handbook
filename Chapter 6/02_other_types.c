#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i(j is an Character pointer)
    printf("The address of i is %p\n", &i);
    printf("The address of i in integer is %u\n", &i);
    printf("The address of i is %p\n", j);
    printf("The value at address j is %c\n", *j);
    printf("The address of j is %p\n\n", &j);

    float k = 24.4;
    float *v = &k; // j is a pointer pointing to k(v is an float pointer)
    printf("The address of k is %p\n", &i);
    printf("The address of k in integer is %u\n", &k);
    printf("The address of k is %p\n", v);
    printf("The value at address v is %f\n", *v);
    printf("The address of v is %p\n", &v);
    return 0;
}