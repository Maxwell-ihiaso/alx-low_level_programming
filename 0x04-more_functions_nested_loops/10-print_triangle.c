#include "main.h"
/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: the int for the paramaters of my function
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j = 0;
	int blank;

	if (size > 0)
	{
		while (j < size)
		{
			blank = size - j - 1;
			while (i < size)
			{
				if (blank > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				i++;
			}
			j++;
			i = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
