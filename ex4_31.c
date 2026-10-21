#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, i, k;

    for (row = -4; row <= 4; row++) {
        k = abs(row);                    /* distance from the middle row */
        for (i = 0; i < k; i++)
            printf(" ");
        for (i = 0; i < 9 - 2 * k; i++)
            printf("*");
        printf("\n");
    }
    return 0;
}
