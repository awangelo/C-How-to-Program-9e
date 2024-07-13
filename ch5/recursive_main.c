#include <stdio.h>

int
main(void)
{
    static int i = 0;
    i++;
    printf("main: %d\n", i);
    main();
}