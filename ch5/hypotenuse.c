#include <stdio.h>
#include <time.h>

double hypotenuse(double a, double b);

int
main(void)
{
    double a, b;
    puts("Enter two sides of a right triangle: ");
    scanf("%lf %lf", &a, &b);

    printf("The hypotenuse is %.2f\n", hypotenuse(a, b));
    return 0;
}

double
hypotenuse(double a, double b)
{
    return sqrt(a * a + b * b);
}