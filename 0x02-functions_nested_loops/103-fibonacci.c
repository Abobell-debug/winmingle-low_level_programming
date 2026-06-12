/**
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description: A program that finds and prints the sum of the even-valued terms, followed by a new line.
**/

#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * in Fibonacci sequence up to 4,000,000.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, next = 0, sum = 2;

	while (next <= 4000000)
	{
		next = f1 + f2;

		if (next > 4000000)
			break;

		/* If even, add to the total */
		if ((next % 2) == 0)
		{
			sum += next;
		}

		/* Move forward */
		f1 = f2;
		f2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}

