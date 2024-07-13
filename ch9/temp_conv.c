#include <stdio.h>

double to_celcius(int t);

int
main(void)
{
    int fahr;
    printf("Enter a temperature in Fahrenheit: ");
    scanf("%d", &fahr);

    printf("The temperature in Celcius is: %lf\n", to_celcius(fahr));
}

double
to_celcius(int t)
{
    return 5.0 / 9.0 * (t - 32);
}