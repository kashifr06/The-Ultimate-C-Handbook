#include <stdio.h>

int main()
{
    /*Write a program to determine whether a character entered by the user is
lowercase or not*/
    char character;
    printf("Enter a Character \n");
    scanf("%c", &character);
    if (character >= 'a' && character <= 'z')
    {
        printf("Entered character is a lowercase\n ");
        printf("The value of the character is %d",character);
    }
    else
    {
        printf("Entered character is not a lowercase\n ");
        printf("The value of the character is %d",character);
    }
    return 0;
}