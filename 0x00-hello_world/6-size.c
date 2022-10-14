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

printf("Size of char: %lu byte(s)", (unsigned long)sizeeof(c));
printf("Size of int: %lu byte(s)", (unsigned long)sizeeof(i));
printf("Size of long int: %lu byte(s)", (unsigned long)sizeeof(li));
printf("Size of long long int: %lu byte(s)", (unsigned long)sizeeof(lli));
printf("Size of float: %lu byte(s)", (unsigned long)sizeeof(f));

return (0);
}
