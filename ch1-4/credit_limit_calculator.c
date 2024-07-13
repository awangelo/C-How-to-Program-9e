#include <stdio.h>

int
main(void)
{
    float begin_balance_m = 0, total_charges_m = 0,
          total_credits_m = 0, allowed_credit = 0,
          new_balance = 0;
    int account_number = 0;

    while (account_number != -1) {
        printf("%s", "Enter account number (-1 to end): ");
        scanf(" %d", &account_number);
        if (account_number == -1)
            break;
        printf("%s", "Enter beginning balance: ");
        scanf(" %f", &begin_balance_m);
        printf("%s", "Enter total charges: ");
        scanf(" %f", &total_charges_m);
        printf("%s", "Enter total credits: ");
        scanf(" %f", &total_credits_m);
        printf("%s", "Enter credit limit: ");
        scanf(" %f", &allowed_credit);

        new_balance = begin_balance_m + total_charges_m - total_credits_m;

        if (new_balance > allowed_credit) {
            printf("Account: %d\n", account_number);
            printf("Credit limit: %.2f\n", allowed_credit);
            printf("Balance: %.2f\n", new_balance);
            printf("%s\n", "Credit limit exceeded.");
        }
    }
}
