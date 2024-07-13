#include <stdio.h>
#include <stdlib.h>

int
main()
{
    float number1 = 7.3;
    float number2;

    float *p_f = NULL;
    p_f        = &number1;
    printf("val: %f\n", *p_f);

    number2 = *p_f;
    printf("val: %f\n", number2);
    printf("addr: %p\n", &number1);
    printf("addr: %p\n", p_f);
}