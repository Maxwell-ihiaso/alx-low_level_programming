#include "main.h"
#include <string.h>

/**
 * _strcat - appends src to dest
 * @dest: destination string
 * @src: source string
 * Description: appends src strin to desc string
 * Return: result of concatenation in string form
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	unsigned int i;

	for (i = 0; i < strlen(src); i++)
		dest[len + i] = src[i];

	return (dest);
}
