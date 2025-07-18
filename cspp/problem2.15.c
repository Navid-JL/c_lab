#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "mylib.h"

int main()
{
    int x = 5;
    int y = 5;

    printf("x == y: %d", !(x ^ y));
    printf("\n");

    return 0;
}