#include <stdio.h>

int main() { 
  int Radius;
  printf("Enter the Radius \n");
  scanf("%d", &Radius);

  int Height;
  printf("Enter the Height \n");
  scanf("%d", &Height);
  printf("the area of the Circle with Radius  %d is %f",Radius,3.14159*Radius*Radius);

  printf("the area of the Cylinder with Radius is %d and Height  %d is %f\n",  Radius, Height, 3.14159 * Radius * Radius * Height);
    
    return 0;
}