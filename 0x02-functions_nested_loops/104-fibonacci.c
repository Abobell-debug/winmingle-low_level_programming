/** 
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description: A program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2followed by a new line
**/

#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long f1_f = 0, f1_b = 1, f2_f = 0, f2_b = 2;
	unsigned long sum_f, sum_b, carry;
	int i;

	printf("%lu, %lu", f1_b, f2_b);

	for (i = 3; i <= 98; i++)
	{
		/* 1. Sum the back (low) parts */
		sum_b = f1_b + f2_b;
		carry = sum_b / 1000000000; /* Extract any carry-over */
		sum_b %= 1000000000;        /* Keep back part under 1 billion */

		/* 2. Sum the front (high) parts plus the carry */
		sum_f = f1_f + f2_f + carry;

		/* 3. Handle Printing */
		if (sum_f > 0)
			printf(", %lu%09lu", sum_f, sum_b);
		else
			printf(", %lu", sum_b);

		/* 4. Update the values for next round */
		f1_f = f2_f; f1_b = f2_b;
		f2_f = sum_f; f2_b = sum_b;
	}
	printf("\n");
	return (0);
}





