#include "main.h"
/**
 * swap_int - function that concatenates two strings
 * @a: parmater a
 * @b: parameter b
 * Description: Swaps two strings
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = &a;
	*a = *b;
	*b = &temp;
}
