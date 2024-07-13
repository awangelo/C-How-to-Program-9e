#include <stdio.h>

void print_square(int side, char c);

int
main(void)
{
    int size;
    char c;
    printf("%s", "Enter the size: ");
    scanf(" %d", &size);
    printf("%s", "Chose a character: ");
    scanf(" %c", &c);

    print_square(size, c);
}

void
print_square(int side, char c)
{
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++)
            printf("%c", c);
        puts("");
    }
}