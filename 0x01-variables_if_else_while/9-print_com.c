#include <stdio.h>

/**
 * main - entry point for function
 *
 * Description: Prints single base 10 numbers
 * without using printf or put
 * Return: return success
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');

if  (n == 9)
{
continue;
}

putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
