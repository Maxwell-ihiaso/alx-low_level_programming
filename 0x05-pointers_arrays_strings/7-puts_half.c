#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Description: prints half of a string, followed by a new line
 */
void puts_half(char *str)
{
	unsigned int len, i;

	if (strlen(str) % 2 == 0)
	{
		len = strlen(str) / 2;
		for (i = len; i < strlen(str); i++)
			_putchar(str[i]);
	}
	else
	{
		len = (strlen(str) - 1) / 2;
		for (i = len + 1; i < strlen(str); i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
