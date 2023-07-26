#include "main.h"

/**
 * print_rev - prints the reverse of string
 *@s:string
 @a:integer
 * Return: Always 0.
 */
void print_rev(char *s)
{
int a;
a = 0;
while (*s != '\0')
{
a++;
}
for (a--; a >= 0; a--)
_putchar(*s);
_putchar('\n');
}
