#include "main.h"

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        /* 1. Logic for FIZZBUZZ (Multiples of both 3 and 5) */
        if (i % 3 == 0 && i % 5 == 0)
        {
            _putchar('F'); _putchar('i'); _putchar('z'); _putchar('z');
            _putchar('B'); _putchar('u'); _putchar('z'); _putchar('z');
        }
        /* 2. Logic for FIZZ (Multiple of 3) */
        else if (i % 3 == 0)
        {
            _putchar('F'); _putchar('i'); _putchar('z'); _putchar('z');
        }
        /* 3. Logic for BUZZ (Multiple of 5) */
        else if (i % 5 == 0)
        {
            _putchar('B'); _putchar('u'); _putchar('z'); _putchar('z');
        }
        /* 4. Logic for NUMBERS (Needs digit handling) */
        else
        {
            if (i == 100) /* Handle 100 specially */
            {
                _putchar('1'); _putchar('0'); _putchar('0');
            }
            else if (i > 9) /* Handle 10 to 99 */
            {
                _putchar((i / 10) + '0');
                _putchar((i % 10) + '0');
            }
            else /* Handle 1 to 9 */
            {
                _putchar(i + '0');
            }
        }

        /* 5. Add a SPACE after every item EXCEPT the last one (100) */
        if (i < 100)
        {
            _putchar(' ');
        }
    }
    _putchar('\n');
    return (0);
}
