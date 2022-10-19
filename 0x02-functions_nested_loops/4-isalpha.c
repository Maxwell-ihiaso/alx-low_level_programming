#include "main.h"

/**
 * _isalpha - checks for case sensitivity
 * @c: expect a value from the user
 * Description: Return 1 for lower case letters
 * and 0 for otherwise
 * Return: always returns 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
