#include <stdio.h>

int main() { 
    float P=34.1;
    int T=8;
    int R=5;

    printf("Simple Interest for a set of values representing P = %f, T = %d, R = %d is %f\n",P,T,R,(P*T*R)/100.0);
    return 0;
}