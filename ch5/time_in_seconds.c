#include <stdio.h>

int time_seconds(int h, int m, int s);

int
main(void)
{
    int h1, m1, s1, h2, m2, s2;
    puts("Enter the first time in hours minutes seconds:");
    scanf("%d %d %d", &h1, &m1, &s1);
    puts("Enter the second time in hours minutes seconds:");
    scanf("%d %d %d", &h2, &m2, &s2);

    int time1 = time_seconds(h1, m1, s1);
    int time2 = time_seconds(h2, m2, s2);

    printf("Seconds between the two times: %ds\n", time2 - time1);
}

int
time_seconds(int h, int m, int s)
{
    return h * 3600 + m * 60 + s;
}