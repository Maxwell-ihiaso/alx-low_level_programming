#include <stdio.h>
#include <math.h>
/**
 * main -  prints the largest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;
	int pf;

	for (pf = 2; pf <= sqrt(n); pf++)
	{

		if (n % pf == 0)
		{
			n = n / pf;
			pf = 1;
		}
	}
	printf("%ld\n", n);
	return (0);
}
