#include "main.h"
#include <string.h>

/**
 * _puts - print a string
 * @str: parameter
 * Description: Prints a string ffollowed by a new line
 * Return: Always 0.
 */
void _puts(char *str)
{
	int len = strlen(str), i;

	for (i = 0; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
