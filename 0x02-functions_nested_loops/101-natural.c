/** 
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description:  A program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
**/

#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		/* If multiple of 3 OR 5 */
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
