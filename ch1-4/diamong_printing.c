#include <stdio.h>

int
main(void)
{
    int height;
    printf("%s", "Enter the height of the diamond: ");
    scanf("%d", &height);

    for (int i = 0; i < height / 2; i++) {
        for (int j = 0; j < height / 2 - i; j++)
            printf("%s", " ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("%s", "*");
        puts("");
    }

    height % 2 == 0 ? height++ : height;
    for (int i = 0; i < height; i++)
        printf("%s", "*");
    puts("");

    for (int i = height / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < height / 2 - i; j++)
            printf("%s", " ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("%s", "*");
        puts("");
    }

    return 0;
}