#include <stdio.h>
/**
 * main - entry point
 * Return: (0) success
 */
void print_number(int n)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
}
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
print_number(i);
putchar(' ');
print_number(j);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
