#include <stdio.h>

int
main(void)
{
    printf("%10d \n", 1234);
    printf("%+.3e \n", 123.456789);
    scanf("%f", &number);
    printf("%#o \n", 100);
    scanf("%s", string);
    scanf("%[0123456789]", n);
    printf("%*.*f \n", x, y, 87.4573);
    scanf("%f%%", &percent);
    printf("%+20.3Lf \n", 3.333333);
}
