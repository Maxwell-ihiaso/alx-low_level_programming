#include <stdio.h>

/**
* main - entry point for code logic
*
* Description: Prints alphabets in reverse
* Return: return success
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
