#include <stdio.h>

/**
* main - entry point for the function
*
* Description: Print to standard error stream
* Return: return success
*/
int main(void)
{
char mssg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stderr, mssg);
return (1);
}
