#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap int a and b
 *@a:first integer
 *@b:second integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
