#include <stdio.h>
// Function prototype
int sum(int, int);

// Function defination
int sum(int x, int y)
{
    // printf("The value of sum is %d\n", x + y);
    return x + y;/* gives the result back to the caller, eg. c=10 , it stored so you can use
 in further calculations*/
}

int main()
{
    int a = 4, b = 6;
    // int c = a + b;
    // printf("The value of c is %d\n", c);
   int c= sum(a, b); // Function call
   printf("The value of c is %d\n",c);


    int a1 = 7, b1 = 10;
    // int c1 = a1 + b1;
    // printf("The value of c1 is %d\n", c1);
  int c1= sum(a1, b1); // Function call
   printf("The value of c1 is %d\n",c1);

    int a2 = 13, b2 = 18;
    // int c2 = a2 + b2;
    // printf("The value of c2 is %d\n", c2);
 int c2= sum(a2, b2); // Function call
  printf("The value of c2 is %d\n",c2);

    int a3 = 2, b3 = 9;
    // int c3 = a3 + b3;
    // printf("The value of c3 is %d\n", c3);
 int c3= sum(a3, b3); // Function call
 printf("The value of c3 is %d\n",c3);

    int a4 = 4, b4 = 21;
    // int c4 = a4 + b4;
    // printf("The value of c4 is %d\n", c4);
 int c4= sum(a4, b4); // Function call
  printf("The value of c4 is %d\n",c4);
}