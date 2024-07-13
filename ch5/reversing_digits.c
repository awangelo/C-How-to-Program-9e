#include <stdio.h>

int reverse(int n);

int
main(void)
{
    int n;
    printf("%s\n", "Enter a number:");
    scanf("%d", &n);

    printf("%d\n", reverse(n));
}

int
reverse(int n)
{
    int reversed = 0;

    while (n != 0) {
        // n % 10 pega o ultimo digito de n
        // * 10 para mover os digitos para a esquerda
        // adciona o ultimo digito de n
        reversed = reversed * 10 + n % 10;
        // remove o ultimo digito de n
        n /= 10;
    }

    return reversed;
}