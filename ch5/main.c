#include <stdio.h>

unsigned long long int fibonacci_tail_helper(int n, unsigned long long int a, unsigned long long int b);
unsigned long long int fibonacci(int n);

int
main(void)
{
    printf("Fibonacci(40) = %llu\n", fibonacci(100));
}

unsigned long long int
fibonacci(int n)
{
    return fibonacci_tail_helper(n, 0, 1);
}

// helper pra tail recursion
unsigned long long int
fibonacci_tail_helper(int n, unsigned long long int a, unsigned long long int b)
{
    if (n == 0)
        return a;
    else if (n == 1)
        return b;
    else
        return fibonacci_tail_helper(n - 1, b, a + b);
}
