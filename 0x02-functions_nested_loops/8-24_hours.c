/**
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description:  A program that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
**/

#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++) /* Outer loop: Hours */
	{
		for (m = 0; m < 60; m++) /* Inner loop: Minutes */
		{
			/* 1. Print hour digits */
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');

			/* 2. Print colon */
			_putchar(':');

			/* 3. Print minute digits */
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');

			/* 4. Print newline to start next minute on new line */
			_putchar('\n');
		}
	}
}



