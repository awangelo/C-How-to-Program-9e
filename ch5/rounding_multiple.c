#include <math.h>
#include <stdio.h>

int roundToInteger(double number);
int roundToTenths(double number);
int roundToHundreths(double number);

int
main()
{
    int returnVal;
    double number;
    puts("Enter numbers to round (Ctrl+D to stop):");

    while ((returnVal = scanf("%lf", &number)) != EOF) {
        if (returnVal == 1) {
            printf("Original number: %.2f\n", number);
            printf("Rounded to integer: %d\n", roundToInteger(number));
            printf("Rounded to tenths: %d\n", roundToTenths(number));
            printf("Rounded to hundreths: %d\n", roundToHundreths(number));
        } else {
            puts("Invalid input. Please enter a number.");
            scanf("%*s");
        }
    }
}

int
roundToInteger(double number)
{
    return floor(number + 0.5);
}

int
roundToTenths(double number)
{
    return floor(number * 10 + 0.5) / 10;
}

int
roundToHundreths(double number)
{
    return floor(number * 100 + 0.5) / 100;
}
