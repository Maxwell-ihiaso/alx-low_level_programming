#include "main.h"

/**
 * print_sign - checks for case sensitivity
 * @n: expect a value from the user
 * Description: Return 1 for lower case letters
 * and 0 for otherwise
 * Return: always returns 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
