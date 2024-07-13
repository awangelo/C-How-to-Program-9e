#include <stdio.h>

int
main(void)
{
    int limit = 100, count = 1;
    double x, term;
    long double euler = 1.0, factorial = 1.0;

    printf("Enter x for which you want to compute e^x: ");
    scanf("%lf", &x);

    term = x; // O primeiro termo da serie apos 1 eh x/1! = x

    while (count < limit && term > 1e-15) { // Adiciona um limite bem pequeno
        euler += term;
        factorial *= count;            // Calcula factorial para o denominador
        term = term * x / (count + 1); // Calcula o próximo termo da série
        count++;
    }

    printf("Computed value of e^x: %.10Lf\n", euler);

    return 0;
}