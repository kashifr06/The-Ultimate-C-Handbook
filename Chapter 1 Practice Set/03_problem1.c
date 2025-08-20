#include <stdio.h>

int main() { 
    int Celsius;
    printf("Enter the Celsius\n");
    scanf("%d",&Celsius);

    printf("The Fahrenheit of the given Celsius %d is %f \n",Celsius,Celsius*1.8+32 );
    
    return 0;
}