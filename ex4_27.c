#include <stdio.h>

int main(void)
{
    int side1, side2, hyp;

    printf("Pythagorean triples (all sides <= 500):\n");
    for (side1 = 1; side1 <= 500; side1++)
        for (side2 = side1; side2 <= 500; side2++)   /* side2 >= side1: skip mirrored duplicates */
            for (hyp = side2; hyp <= 500; hyp++)
                if (side1 * side1 + side2 * side2 == hyp * hyp)
                    printf("%3d %3d %3d\n", side1, side2, hyp);
    return 0;
}
