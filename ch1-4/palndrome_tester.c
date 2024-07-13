#include <stdio.h>
/*(Palindrome Tester) A palindrome is a number or a text phrase that reads the
same backward as forward. For example, each of the following five-digit integers is a
palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five-
digit integer and determines whether or not it’s a palindrome. [Hint: Use the division
and remainder operators to separate the number into its individual digits.]*/
int
main(void)
{
    int num;
    printf("%s", "Enter a 5 digit number: ");
    scanf("%d", &num);

    int n1 = num / 10000;
    int n2 = num / 1000 % 10;
    int n4 = num / 10 % 10;
    int n5 = num % 10;

    printf("n1: %d\n", n1);
    printf("n2: %d\n", n2);
    printf("n4: %d\n", n4);
    printf("n5: %d\n", n5);

    if (n1 == n5 && n2 == n4)
        printf("%d is a palindrome\n", num);
    else
        printf("%d is not a palindrome\n", num);

    return 0;
}