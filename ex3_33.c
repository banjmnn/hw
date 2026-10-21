#include <stdio.h>

int main(void)
{
    int length, breadth, row, col;

    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter breadth: ");
    scanf("%d", &breadth);

    for (row = 1; row <= length; row++) {
        for (col = 1; col <= breadth; col++) {
            /* only the border is filled */
            if (row == 1 || row == length || col == 1 || col == breadth)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
