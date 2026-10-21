#include <stdio.h>

int main(void)
{
    double hours, rate, pay;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%lf", &hours);
    while (hours != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);

        if (hours <= 40)
            pay = hours * rate;
        else
            pay = 40 * rate + (hours - 40) * rate * 1.5;

        printf("Salary is $%.2f\n\n", pay);
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%lf", &hours);
    }
    return 0;
}
