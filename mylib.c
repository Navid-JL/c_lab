#include <stdio.h>
#include <string.h>
#include "mylib.h"

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
        printf("\n");
    }
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x, sizeof(void *));
}

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y; /* Step 1 */
    *x = *x ^ *y; /* Step 2 */
    *y = *x ^ *y; /* Step 3 */
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1;
         //  first <= last; Modify this line to fix 0 middle element
         first < last;
         first++, last--)
        inplace_swap(&a[first], &a[last]);
}

int fun1(unsigned word)
{
    return (int)((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int)word << 24) >> 24;
}

/* Buggy code */
float sum_elements(float a[], int length)
{
    int i;
    float result = 0;

    for (i = 0; i < length - 1; i++)
    {
        result += a[i];
    }

    return result;
}

int tmult_ok(int x, int y)
{
    int p = x * y;
    return !x || p / x == y;
}

double e_taylor(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;

    r = e_taylor(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}