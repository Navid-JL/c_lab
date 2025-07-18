#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int *p;

    if ((p = calloc(10, sizeof(*p))) == NULL)
    {
        printf("Error allocating memory with calloc.\n");
    }

    for (int i = 0; i < 10; i++)
    {
        p[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);

    return 0;
}