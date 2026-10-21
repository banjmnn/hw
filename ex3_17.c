#include <stdio.h>

int main(void)
{
    int account;
    double begin, charges, credits, limit, balance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);
    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf("%lf", &begin);
        printf("Enter total charges: ");
        scanf("%lf", &charges);
        printf("Enter total credits: ");
        scanf("%lf", &credits);
        printf("Enter credit limit: ");
        scanf("%lf", &limit);

        balance = begin + charges - credits;
        if (balance > limit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", limit);
            printf("Balance:      %.2f\n", balance);
            printf("Credit Limit Exceeded.\n");
        }
        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &account);
    }
    return 0;
}
