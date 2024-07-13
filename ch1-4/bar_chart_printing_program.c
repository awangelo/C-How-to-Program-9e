#include <stdio.h>

int
main(void)
{
    int n1, n2, n3, n4, n5;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    for (int i = 0; i < n1; i++)
        printf("%s", "*");
    puts("");
    for (int i = 0; i < n2; i++)
        printf("%s", "*");
    puts("");
    for (int i = 0; i < n3; i++)
        printf("%s", "*");
    puts("");
    for (int i = 0; i < n4; i++)
        printf("%s", "*");
    puts("");
    for (int i = 0; i < n5; i++)
        printf("%s", "*");
    puts("");

    return 0;
}