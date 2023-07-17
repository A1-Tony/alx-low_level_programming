#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: (0) success
 */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last_digit = n % 10;
if (last_digit > 5)
{
printf("the last digit of %d is %s and is greater than 5\n", n, "last_digit");
}
else if (last_digit == 0)
{
printf("the last digit of %d is %s and is 0\n", n, "last_digit");
}
else if (last_digit < 6 && last_digit != 0)
{
printf("the last digit of %d is %s and is less than 6 and not 0\n", n, "last_digit");
}
return (0);
}
