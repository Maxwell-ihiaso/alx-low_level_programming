#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * @n: the int params

 * Description: Draws a disgonal line
*/
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			i++;
			j = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
