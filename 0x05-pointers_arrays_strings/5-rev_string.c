#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Description: Reverses a string
 */
void rev_string(char *s)
{
	int i, j, count = 0, len = strlen(s) + 1;
	char *z = (char *) calloc(len, sizeof(char));

	while (s[count] != '\0')
		count++;

	j = count - 1;

	for (i = 0; i < count; i++)
	{
		z[i] = s[j];
		j--;
	}

	for (i = 0; i < count; i++)
	{
		s[i] = z[i];
		j--;
	}

}
