#include <stdio.h>
/*Hollow Square of Asterisks) Modify the program you wrote in the preceding
exercise so that it prints a hollow square. For example, if your program reads a size of
5, it should print */

int
main(void)
{
    int size, row = 1, column = 1;

    printf("%s", "Enter the size of the square: ");
    scanf("%d", &size);
    while (row <= size) {
        while (column <= size) {
            if (row == 1 || row == size) {
                printf("*");
            } else {
                if (column == 1 || column == size) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            column++;
        }
        printf("\n");
        column = 1;
        row++;
    }
}