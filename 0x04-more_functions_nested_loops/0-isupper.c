#include "main.h"

/**
 * _isupper - Checks for uppercase letters
 * @c: accepts and integer
 *
 * Description: Checks for case sensistivity
 * Return: returns an integer
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
