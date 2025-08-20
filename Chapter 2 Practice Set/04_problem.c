#include <stdio.h>

int main()
{
    // Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
    // 3*2/3 – 3+1
    // 6/3-3+1
    // 2-3+1
    // -1+1=0
    int x = 2, y = 3, z = 3, k = 1;
    printf("The value of 3*x/y-z+k is %f\n", 3 * x / y - z + k);
    return 0;
}