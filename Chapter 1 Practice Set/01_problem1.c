#include <stdio.h>

int main() { 
   // int length= 3;
    //int Breadth=6;
    int length, Breadth;
    printf("Enter the length of the rectangle\n");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle\n");
    scanf("%d", &Breadth);
    
    printf("The area of this reactangle is %d", length * Breadth);
    return 0;
}