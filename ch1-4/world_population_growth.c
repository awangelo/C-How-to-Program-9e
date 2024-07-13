#include <stdio.h>
/* For this exercise, research world population growth issues. This is a controversial
topic, so be sure to investigate various viewpoints. Get estimates for the current
world population and its growth rate. Write a program that calculates world popula-
tion growth each year for the next 100 years, using the simplifying assumption that the
current growth rate will stay constant. Print the results in a table. The first column
should display the year from 1 to 100. The second column should display the antic-
ipated world population at the end of that year. The third column should display the
numerical increase in the world population that would occur that year. Using your
results, determine the years in which the population would become double and
eventually quadruple what it is today. */
int
main(void)
{
    int           limit = 100;
    float         growth_rate = 0.91;
    long long int actual_population = 8100000000;

    printf("%s\t\t%s\t\t%s\n", "Year", "Population", "Increase");

    while (limit > 0) {
        actual_population += actual_population * growth_rate;
        long long int increase = actual_population * growth_rate;
        printf("%d\t\t%Ld\t\t%Ld\n", 101 - limit, actual_population, increase);
        limit--;
    }

    return 0;
}