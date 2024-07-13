#include <stdio.h>

float min_float(float f1, float f2, float f3);

int
main(void)
{
    float f1, f2, f3;
    puts("Enter the tree floating point numbers:");
    scanf("%f %f %f", &f1, &f2, &f3);

    printf("The minimum of the three numbers is: %f\n", min_float(f1, f2, f3));
}

float
min_float(float f1, float f2, float f3)
{
    if (f1 < f2 && f1 < f3)
        return f1;
    else if (f2 < f1 && f2 < f3)
        return f2;
    else
        return f3;
}