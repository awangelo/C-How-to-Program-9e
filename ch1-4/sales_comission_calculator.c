#include <stdio.h>

int
main(void)
{
    const float salary = 200;
    float       comission = 0.09;
    float       sales = 0;
    float       total = salary + sales * comission;

    while (sales != -1) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf(" %f", &sales);
        if (sales == -1)
            break;

        total = salary + sales * comission;
        printf("Salary is: $%.2f\n", total);
    }
}
