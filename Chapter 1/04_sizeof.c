#include<stdio.h>
int main() {
    int a; // variable declaration
    a = 6; // variable initialization
    printf("%d", a);
    float b = 3.14; // another variable declaration and initialization
    char c = 'A'; // character variable declaration and initialization
    
    // sizeof operator usage
    printf("\nSize of int: %zu bytes", sizeof(int));
    printf("\nSize of float: %zu bytes", sizeof(float));
    printf("\nSize of char: %zu bytes", sizeof(char));
    
    return 0;
}