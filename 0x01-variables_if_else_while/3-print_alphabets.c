#include <stdio.h>

/**
* main - entry point for function
*
* Description: This program will assign a random number
* to variable n
* Return: Returns  success
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
