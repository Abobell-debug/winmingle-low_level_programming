/**
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description:  A program that prints all natural numbers from n to 98, followed by a new line.

**/

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	/* Logic: We keep looping until n reaches our target 98 */
	while (n != 98)
	{
		printf("%d, ", n);

		/* Determine the direction: */
		if (n < 98)
			n++; /* Count up if smaller */
		else
			n--; /* Count down if larger */
	}

	/* Outside the loop: print the final 98 without a comma */
	printf("98\n");
}


