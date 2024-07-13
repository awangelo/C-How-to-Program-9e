#include <math.h>
#include <stdio.h>

int
main(void)
{
    int returnVal;
    double number;
    puts("Enter numbers to round (Ctrl+D to stop):");

    while ((returnVal = scanf("%lf", &number)) != EOF) {
        if (returnVal == 1) {
            int roundedNum = floor(number + 0.5);
            printf("%.2f rouded: %d\n", number, roundedNum);
        } else {
            puts("Invalid input. Please enter a number.");
            scanf("%*s");
        }
    }
}