#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
main()
{
    char tel[15];
    printf("Enter a telephone number ((111) 111-1111): ");
    fgets(tel, sizeof(tel), stdin);

    char *area_code = strtok(tel, "()");
    char *exchange  = strtok(NULL, " -");
    char *number    = strtok(NULL, "");

    printf("You entered\n%s\n%s\n%s\n", area_code, exchange, number);
}
