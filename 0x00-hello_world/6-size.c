#include<stdio.h>
/**
 * main - A program that prints out size of various types on the computer
 * Return: (0) success
 */
int main(void)
{
char c;
int i;
long int a;
long long int b;
float f;
printf("The size a char: %lu byte(s)/n", (unsigned long)sizeof(c));
printf("The size an int: %lu byte(s)/n", (unsigned long)sizeof(i));
printf("The size a long int: %lu byte(s)/n", (unsigned long)sizeof(a));
printf("The size a long long int: %lu byte(s)/n", (unsigned long)sizeof(b));
printf("The size a float: %lu byte(s)/n", (unsigned long)sizeof(f));
return (0);
}
