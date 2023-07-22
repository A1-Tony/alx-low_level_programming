#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *description: prints the numbers 1 -100\n
 multiples of 3 print Fizz, multiples of 5 print Buzz and  multiples of both three and five print FizzBuzz
 * Return: Always 0.
 */
int main (void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ")
}
printf("\n");
return(0);
}
