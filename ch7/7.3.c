#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int
main()
{
    float numbers[SIZE] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
    float *p_numbers    = NULL;

    for (size_t i = 0; i < SIZE; i++)
        printf("numbers[%zu] = %.1f\n", i, numbers[i]);

    p_numbers = numbers;
    p_numbers = &numbers[0];
    puts("");

    // for (size_t i = 0; i < SIZE; i++)
    //     printf("numbers[%zu] = %.1f\n", i, *(p_numbers + i));
    // puts("");
    // for (size_t i = 0; i < SIZE; i++)
    //     printf("numbers[%zu] = %.1f\n", i, *(numbers + i));
    // puts("");
    // for (size_t i = 0; i < SIZE; i++)
    //     printf("numbers[%zu] = %.1f\n", i, p_numbers[i]);
    printf("%.1f ", numbers[4]);
    printf("%.1f ", *(p_numbers + 4));
    printf("%.1f ", p_numbers[4]);
    printf("%.1f ", *(numbers + 4));
    puts("");
    printf("addr: %p val: %.1f ", p_numbers + 8, *(p_numbers + 8));

    p_numbers = &numbers[5];
    puts("");
    printf("\n\naddr: %p val: %.1f ", p_numbers, *(p_numbers));
    p_numbers -= 4;
    printf("\naddr: %p val: %.1f ", p_numbers, *(p_numbers));
}
