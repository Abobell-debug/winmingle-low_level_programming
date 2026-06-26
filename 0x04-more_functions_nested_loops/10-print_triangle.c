#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* 1. The Manager: controls which row we are on */
		for (row = 1; row <= size; row++)
		{
			/* 2. Worker 1: Prints the leading spaces */
			for (col = 1; col <= (size - row); col++)
			{
				_putchar(' ');
			}

			/* 3. Worker 2: Prints the hashes after the spaces */
			for (col = 1; col <= row; col++)
			{
				_putchar('#');
			}

			/* 4. Finished the row, hit Enter */
			_putchar('\n');
		}
	}
}
