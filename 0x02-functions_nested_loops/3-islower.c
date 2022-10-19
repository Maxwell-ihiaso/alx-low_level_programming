#include "main.h"

/**
 * _islower - checks for case sensitivity
 * @c: expect a value from the user
 * Description: Return 1 for lower case letters
 * and 0 for otherwise
 * Return: always returns 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
_putchar('1');
_putchar('\n');
return (1);
}
else
{
_putchar('0');
_putchar('\n');
return (0);
}
}
