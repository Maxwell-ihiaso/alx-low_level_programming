#include "main.h"

/**
 * print_last_digit - entry point for function
 * @c: Parameter
 *
 * Description: This program will assign a random number
 * to variable n
 * Return: Returns  success
 */
int print_last_digit(int c)
{
int n = c % 10;
if (n >= 0)
{
_putchar(n + '0');
return (n);
}
else
{
n *= -1;
_putchar(n + '0');
return (n);
}
}
