#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
#include "mylib.h"
#include <limits.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    char a[20] = "World";

    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count = count + 1;
    }

    printf("%d\n", count);

    return 0;
}