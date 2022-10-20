#include "main.h"

/**
 * _isdigits - cheecks for integers
 * @c: params integer
 *
 * Description: Checks for valid numbers
 * Return: returns success
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
