#include "main.h"

/**
 * _puts - print a string
 * @str: parameter
 * Description: Prints a string ffollowed by a new line
 * Return: Always 0.
 */
void _puts(char *str)
{
	if (*str == '\0')
		return;
	write(1, *str, 1);
	_puts(++str);
}
