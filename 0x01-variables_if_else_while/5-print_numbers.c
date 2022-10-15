#include <stdio.h>

/**
* main - entry point for our function
*
* Description: Prints all single base 10 number
* Return: return success
*/
int main(void)
{
int num, max_base = 10;
for (num = 0; num < max_base; num++)
{
printf("%d", num);
}
printf("\n");
return (0);
}
