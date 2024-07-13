#include <stdio.h>

double calculate_charges(double hours);

int
main(void)
{
    int c1, c2, c3;
    double h1, h2, h3;
    printf("Enter the first customer's car # and hours parked: ");
    scanf("%d %lf", &c1, &h1);
    printf("Enter the second customer's car # and hours parked: ");
    scanf("%d %lf", &c2, &h2);
    printf("Enter the third customer's car # and hours parked: ");
    scanf("%d %lf", &c3, &h3);

    puts("Car\tHours\tCharge");
    printf("%d\t%.1lf\t%.2f\n", c1, h1, calculate_charges(h1));
    printf("%d\t%.1lf\t%.2f\n", c2, h2, calculate_charges(h2));
    printf("%d\t%.1lf\t%.2f\n", c3, h3, calculate_charges(h3));
    printf("TOTAL\t%.1lf\t%.2f\n", h1 + h2 + h3,
           calculate_charges(h1) + calculate_charges(h2) + calculate_charges(h3));
}

double
calculate_charges(double hours)
{
    const double BASE_CHARGE = 2.0;
    const double HOUR_CHARGE = 0.5;
    const double MAX_CHARGE  = 10.0;

    if (hours <= 3.0)
        return BASE_CHARGE;
    else if (hours == 24.0)
        return MAX_CHARGE;

    return BASE_CHARGE + ceil(hours - 3) * HOUR_CHARGE;
}
