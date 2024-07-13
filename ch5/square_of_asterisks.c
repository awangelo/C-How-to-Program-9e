#include <stdio.h>

void print_square(int side);

int
main(void)
{
    int size;
    printf("%s", "Enter the size: ");
    scanf("%d", &size);

    print_square(size);
}

void
print_square(int side)
{
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++)
            printf("%s", "*");
        puts("");
    }
}