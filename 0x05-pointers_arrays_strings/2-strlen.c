#include "main.h"
#include <stdio.h>

/**
 * _strlen - print the total length of a string
 *@s:string
 * Return: Always 0.
 */
int _strlen(char *s)
{
int total_leng = 0;
while (*s != '\0')
{
total_leng++;
s++;
}
return (total_leng);
}
