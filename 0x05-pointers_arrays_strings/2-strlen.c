#include "main.h"

/**
 * _strlen - print a string length
 * @s: parameter
 * Description: Prints a string length
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++i);

	return (i);
}
