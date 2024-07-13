#include <math.h>
#include <stdio.h>

int
main(void)
{
    double number;
    puts("Enter numbers to round (Ctrl+D to stop):");

    while (scanf("%lf", &number) == 1) {
        int roundedNum = floor(number + 0.5);

        printf("%.2f rouded: %d\n", number, roundedNum);
    }
}