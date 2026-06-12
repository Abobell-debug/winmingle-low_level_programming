/** 
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description:  A program that prints the n times table, starting with 0.
**/
#include "main.h"

void print_times_table(int n)
{
	int row, col, res;

	if (n >= 0 && n <= 15) /*The Safety Gate*/
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				res = row * col;
				if (col == 0)
				{
					_putchar(res + '0');
				} else if (res < 10)
				{
					_putchar(','); _putchar(' '); _putchar(' '); _putchar(' ');
					_putchar(res + '0');
				} else if (res < 100)
				{
					_putchar(','); _putchar(' '); _putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				} else
				{
					_putchar(','); _putchar(' ');
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}



