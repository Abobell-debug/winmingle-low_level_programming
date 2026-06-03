 /**
 * Author: Your Full Name
 * Program: WinMingle Community C Training
 * Description: Brief description of this file
 */
#include <stdio.h>
int main (void)
{
	int i;
	int j;

	/* i represents the first digit (the "tens" place) */
	for (i = 0; i <= 9; i++)
	{
		/* j represents the second digit (the "ones" place) */
		/* The trick: j always starts ONE step ahead of i (j = i + 1) */
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0'); /* Putchar 1: print first digit */
			putchar(j + '0'); /* Putchar 2: print second digit */

			/* Logic: Don't print comma/space after the very last combo (89) */
			if (i != 8 || j != 9)
			{
				putchar(','); /* Putchar 3: print comma */
				putchar(' '); /* Putchar 4: print space */
			}
		}
	}
	putchar('\n'); /* Putchar 5: print newline */

	return (0);
}
