#include"main.h"
/**
 * *_memcpy - function copies @n byte from memory area @src
 * to memory @dest
 * @n: function copies
 * @src: byte from memory area
 * @dest: to memory area
 * return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
}
return (dest);
}
