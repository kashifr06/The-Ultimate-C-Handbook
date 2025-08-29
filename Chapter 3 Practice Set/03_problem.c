#include <stdio.h>

int main()
{
    /*  Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user */
    float income, income_tax;
    printf("Write your income to get income tax \n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        income_tax = (income - 250000) * 0.05;
        printf("You have to pay income tax= %.2f\n", income_tax);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        income_tax = (500000 - 250000) * 0.05 + (income - 500000) * 0.2;
        printf("You have to pay income tax=%.2f\n", income_tax);
    }
    else if (income >= 1000000)
    {
        income_tax = (500000 - 250000) * 0.05 + (100000 - 500000) * 0.2 + (income - 100000) * 0.3;
        printf("You have to pay income tax=%.2f\n", income_tax);
    }
    else
    {
        printf("Your income is less than 2.5L.\nSo you are not eligible to pay income tax ");
    }
    return 0;
}