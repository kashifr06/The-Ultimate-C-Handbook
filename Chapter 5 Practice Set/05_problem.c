#include <stdio.h>

int main(){
    int a = 4;
printf("%d %d %d \n", a, ++a, a++);
// left to right 4 5 5
// right to left 6 6 4
    return 0;
}