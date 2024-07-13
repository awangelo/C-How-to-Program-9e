#include <math.h>
#include <stdio.h>

void sieve_of_eratosthenes(int limit);

int
main()
{
    int limit = 1000;
    sieve_of_eratosthenes(limit);
    return 0;
}

void
sieve_of_eratosthenes(int limit)
{
    int is_prime[1000]; // Increase array size to 1000

    // Initialize all elements to 1 (true)
    for (int i = 0; i < limit; i++)
        is_prime[i] = 1;

    // Implement the Sieve of Eratosthenes
    for (int p = 2; p * p <= limit; p++) {
        // If is_prime[p] is not changed, then it is a prime
        if (is_prime[p] == 1) {
            // Update all multiples of p
            for (int i = p * p; i < limit; i += p)
                is_prime[i] = 0;
        }
    }

    // Print all prime numbers
    printf("Prime numbers between 1 and %d:\n", limit - 1);
    for (int p = 2; p < limit; p++)
        if (is_prime[p])
            printf("%d ", p);
    printf("\n");
}