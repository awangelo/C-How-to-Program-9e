#include <stdio.h>
#include <unistd.h>
/*(Multiples of 2 with an Infinite Loop) Write a program that keeps printing the
multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should
not terminate (i.e., you should create an infinite loop). What happens when you run
this program?*/
int
main(void)
{
    long long int count = 2;

    while (1) {
        printf("%lld\n", count);
        count <<= 1;
        usleep(10000); // sleep para dar tempo de ver
    }
}