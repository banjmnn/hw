#include <stdio.h>
#include <math.h>

int main(void)
{
    int r, year;
    double rate, amount;
    const double principal = 5000.0;

    /* r is an integer (100..120) to avoid float loop-counter error;
       rate = r / 1000 gives 10.0% .. 12.0% in 0.5% steps */
    for (r = 100; r <= 120; r += 5) {
        rate = r / 1000.0;
        printf("\nInterest rate: %.1f%%\n", rate * 100);
        printf("%4s%21s\n", "Year", "Amount on deposit");
        for (year = 1; year <= 15; year++) {
            amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }
    }
    return 0;
}
