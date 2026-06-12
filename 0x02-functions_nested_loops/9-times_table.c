/** 
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description: A program that prints the 9 times table, starting with 0.
**/

#include "main.h"

void times_table(void)
{
	int row, col, res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			res = row * col;

			if (col == 0)
			{
				_putchar(res + '0');
			}
			else if (res < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n'); /* Next row */
	}
}

