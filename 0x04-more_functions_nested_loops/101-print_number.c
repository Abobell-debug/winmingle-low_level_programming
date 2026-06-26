#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	/* 1. Handle negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n1 = -n; /* Convert to positive and store in unsigned int */
	}
	else
	{
		n1 = n;
	}

	/* 2. The Recursion Logic (Peeling the number) */
	/* If there is more than one digit left... */
	if (n1 / 10)
	{
		/* Call the function again with all digits EXCEPT the last one */
		print_number(n1 / 10);
	}

	/* 3. The Print (This runs as the function "unfolds") */
	/* Extract the last digit and print it */
	_putchar((n1 % 10) + '0');
}
