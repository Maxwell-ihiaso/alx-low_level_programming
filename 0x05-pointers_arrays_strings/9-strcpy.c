#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string grom src to dest
 * @dest: destination to copy string to
 * @src: source to copy string from
 * Description: copies the string pointed to by src
 * Return: pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
