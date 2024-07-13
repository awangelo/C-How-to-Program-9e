#include <stdio.h>

int
main(void)
{
    int height = 0;

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i + 1; j++)
            printf("%s", "*");
        printf("\n");
    }

    puts("");

    for (int i = 0; i < height; i++) {
        for (int j = height; j > i; j--)
            printf("%s", "*");
        printf("\n");
    }

    puts("");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++)
            printf("%s", " ");
        for (int j = height; j > i; j--)
            printf("%s", "*");
        printf("\n");
    }

    puts("");

    for (int i = 0; i < height; i++) {
        for (int j = height - i - 1; j > 0; j--)
            printf("%s", " ");
        for (int j = 0; j < i + 1; j++)
            printf("%s", "*");
        printf("\n");
    }

    return 0;
}