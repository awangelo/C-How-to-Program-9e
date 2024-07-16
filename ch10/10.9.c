// (Using Unions) Create union floatingPoint with members float f, double d
// and long double x. Write a program that inputs values of type float, double and long
// double and stores the values in union variables of type union floatingPoint. Each
// union variable should be printed as a float, a double and a long double. Do the val-
// ues always print correctly?
#include <stdio.h>

union floatingPoint {
    float f;
    double d;
    long double x;
};

int
main()
{
    union floatingPoint fp;

    printf("Enter a float, double, and long double: ");
    scanf("%f", &fp.f);
    scanf("%lf", &fp.d);
    scanf("%Lf", &fp.x);

    printf("Float: %f\n", fp.f);
    printf("Double: %lf\n", fp.d);
    printf("Long Double: %Lf\n", fp.x);
}