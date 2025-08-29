#include <stdio.h>

int main()
{
    /* Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user */
    int Total;
    float percentage;
    int subject1;
    printf("Enter the marks of subject1: \n");
    scanf("%d", &subject1);
    int subject2;
    printf("Enter the marks of subject2: \n");
    scanf("%d", &subject2);
    int subject3;
    printf("Enter the marks of subject3: \n");
    scanf("%d", &subject3);
    // calculate Total marks
    Total = subject1 + subject2 + subject3;
    // calculate percentage =(total marks/300)*100.
    percentage = (Total / 300.0) * 100; // assuming total marks of a subject is 100.
    // condition for pass or fail
    if (percentage >= 40 && subject1 >= 33 && subject2 >= 33 && subject3 >= 33)
    {
        printf("Congratulation! You are Pass.\n");
        printf("Your Percentage is %.2f%%\n ", percentage);
    }
    else
    {
        printf("Sorry, You are Fail.\n");
        printf("Your Percentage is %.2f%%\n ", percentage);
    }

    return 0;
}