#include "myfunctions.h"

int main()
{
    int x = 10;
    int y = 5;

    printf("X: %d,\tY: %d", x, y);

    printf("\n");

    inplace_swap(&x, &y);

    printf("X: %d,\tY: %d", x, y);

    printf("\n");

    return 0;
}