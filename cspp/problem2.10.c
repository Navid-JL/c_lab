#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y; /* Step 1 */
    *x = *x ^ *y; /* Step 2 */
    *y = *x ^ *y; /* Step 3 */
}

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