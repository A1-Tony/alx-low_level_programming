#include<stdio.h>
/**
 * main - A program that prints out size of various types on the computer
 * Return: (0) success
 */
int main(void)
{
printf("The size a char: %lu byte(s)/n", (unsigned long)sizeof(char));
printf("The size an int: %lu byte(s)/n", (unsigned long)sizeof(int));
printf("The size a long int: %lu byte(s)/n", (unsigned long)sizeof(long int));
printf("The size a long long int: %lu byte(s)/n", (unsigned long)sizeof(long long int));
printf("The size a float: %lu byte(s)/n", (unsigned long)sizeof(float));
return (0);
}
