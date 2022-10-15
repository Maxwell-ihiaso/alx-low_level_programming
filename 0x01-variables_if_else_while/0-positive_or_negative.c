#include <stdlib.h>
#include <time.h>
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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
}
