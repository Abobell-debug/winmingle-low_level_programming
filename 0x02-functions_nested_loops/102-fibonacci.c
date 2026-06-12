/** 
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description:  A program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
**/

#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count;
	long f1 = 1, f2 = 2, next;

	/* Print the first two manually because they are our "Seed" */
	printf("%ld, %ld", f1, f2);

	/* We already printed 2, so we need 48 more to reach 50 */
	for (count = 3; count <= 50; count++)
	{
		next = f1 + f2;
		printf(", %ld", next);

		/* Slide the window forward */
		f1 = f2;
		f2 = next;
	}

	printf("\n");
	return (0);
}


