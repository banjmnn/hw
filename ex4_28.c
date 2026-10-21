#include <stdio.h>

int main(void)
{
    int paycode;
    double salary, hours, rate, sales, pieces, price, pay;

    printf("Enter paycode (1=manager, 2=hourly, 3=commission, 4=pieceworker, -1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
        case 1:
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);
            pay = salary;
            printf("Manager's pay is $%.2f\n", pay);
            break;
        case 2:
            printf("Enter hourly wage: ");
            scanf("%lf", &rate);
            printf("Enter hours worked: ");
            scanf("%lf", &hours);
            if (hours <= 40)
                pay = hours * rate;
            else
                pay = 40 * rate + (hours - 40) * rate * 1.5;
            printf("Hourly worker's pay is $%.2f\n", pay);
            break;
        case 3:
            printf("Enter gross weekly sales: ");
            scanf("%lf", &sales);
            pay = 250.0 + 0.057 * sales;
            printf("Commission worker's pay is $%.2f\n", pay);
            break;
        case 4:
            printf("Enter number of pieces: ");
            scanf("%lf", &pieces);
            printf("Enter pay per piece: ");
            scanf("%lf", &price);
            pay = pieces * price;
            printf("Pieceworker's pay is $%.2f\n", pay);
            break;
        default:
            printf("Invalid paycode.\n");
            break;
        }
        printf("\nEnter paycode (1=manager, 2=hourly, 3=commission, 4=pieceworker, -1 to end): ");
        scanf("%d", &paycode);
    }
    return 0;
}
