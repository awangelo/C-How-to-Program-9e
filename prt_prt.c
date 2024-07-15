#include <stdio.h>
#include <stdlib.h>

int
main()
{
    int a = 4, b = 10;
    int *p_a, *p_b;

    p_a = &a;
    p_b = p_a;
    printf("*p_a = %d, *p_b = %d\n", *p_a, *p_b);
    printf("p_a = %p, p_b = %p\n", p_a, p_b);

    p_b        = &b;
    int **pp_b = &p_b;
    printf("\n*p_b = %d, p_b = %p\n", *p_b, p_b);
    printf("**pp_b = %d, pp_b = %p\n", **pp_b, pp_b);

    **pp_b += 3;
    *p_a += 5;

    printf("\na = %d, b = %d\n", a, b);
    printf("*p_a = %d, *p_b = %d\n**pp_b = %d\n", *p_a, *p_b, **pp_b);
}