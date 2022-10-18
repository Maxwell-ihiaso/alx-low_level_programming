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
for (n = 0; n < 16; n++)
{
putchar((n % 16) + '0');
}
putchar('\n');
return (0);
}
