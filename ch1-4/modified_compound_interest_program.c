#include <math.h>
#include <stdio.h>

int
main(void)
{
    double principal = 1000.0;
    double rate      = 0.05;

    printf("%s%21s\n", "Year", "Amount on deposit");

    for (int j = 5; j < 10; j++) {
        rate = j * 0.01;

        for (int year = 1; year <= 10; ++year) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }
    }
}