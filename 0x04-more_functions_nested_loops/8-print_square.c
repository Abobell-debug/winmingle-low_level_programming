#include "main.h"

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++) /* Vertical Manager */
		{
			for (col = 0; col < size; col++) /* Horizontal Worker */
			{
				_putchar('#');
			}
			_putchar('\n'); /* Finished the line, move down */
		}
	}
}



