#include "main.h"
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++) /* Loop for each line */
		{
			for (j = 0; j < i; j++) /* Loop for the spaces on that line */
			{
				_putchar(' ');
			}
			_putchar('\\'); /* The Double-Backslash fix! */
			_putchar('\n'); /* Hit Enter after each backslash */
		}
	}
	else
	{
		_putchar('\n'); /* Rule: if n <= 0, just print \n */
	}
}
