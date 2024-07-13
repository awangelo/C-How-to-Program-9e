#include <stdio.h>

int
main(void)
{
    int product = 0, quantity = 0;
    float total = 0;

    printf("%s", "Product\tPrice\n");
    printf("%s", "1\t$2.98\n");
    printf("%s", "2\t$4.50\n");
    printf("%s", "3\t$9.98\n");
    printf("%s", "4\t$4.49\n");
    printf("%s", "5\t$6.87\n");
    puts("(-1 to end input)");

    for (int i = 0; i < 5; i++) {
        printf("%s", "Enter product number: ");
        scanf("%d", &product);
        printf("%s", "Enter quantity sold: ");
        scanf("%d", &quantity);

        switch (product) {
        case 1:
            total += quantity * 2.98;
            break;
        case 2:
            total += quantity * 4.50;
            break;
        case 3:
            total += quantity * 9.98;
            break;
        case 4:
            total += quantity * 4.49;
            break;
        case 5:
            total += quantity * 6.87;
            break;
        default:
            puts("Invalid product number");
            break;
        }
    }

    printf("Total retail value: $%.2f\n", total);

    return 0;
}