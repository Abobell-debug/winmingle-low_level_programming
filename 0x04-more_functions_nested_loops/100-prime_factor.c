#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long divisor = 2;

	/* Peel away the smallest factors */
	while (divisor < n)
	{
		if (n % divisor == 0)
		{
			/* n is divisible, so update n by dividing it */
			n = n / divisor;
		}
		else
		{
			/* Not divisible, move to the next number */
			divisor++;
		}
	}

	/* After the loop, the remaining n is the largest factor */
	printf("%ld\n", n);

	return (0);
}
