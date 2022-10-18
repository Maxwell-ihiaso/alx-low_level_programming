#include "main.h"

/**
 * print_alphabet_x10 - entry point for function
 *
 * Description: This program will assign a random number
 * to variable n
 * Return: Returns  success
 */
void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
