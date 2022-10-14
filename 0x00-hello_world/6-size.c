#include <stdio.h>

/**
* main - Entry point for the code
*
* Description: Prints the size of various
* on the computer
*Return: Returns success
*/
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of char: %lu byte(s)", (unsigned long)sizeof(c));
printf("Size of int: %lu byte(s)", (unsigned long)sizeof(i));
printf("Size of long int: %lu byte(s)", (unsigned long)sizeof(li));
printf("Size of long long int: %lu byte(s)", (unsigned long)sizeof(lli));
printf("Size of float: %lu byte(s)", (unsigned long)sizeof(f));

return (0);
}
