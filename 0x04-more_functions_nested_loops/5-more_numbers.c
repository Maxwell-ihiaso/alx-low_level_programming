#include "main.h"

/**
 * more_numbers - Print numbers
 *
 * Description: Print numbers
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
