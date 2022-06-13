#include "main.h"

/**
* times_table - prnts the 9 times table
*
* Description: prints the 9 times tabl* Description: prints the 9 times table
*
* Return: Always 0.
*/

void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int res = a * b;

			if (b != 0)
			{
				_putchar(' ');
				if (res < 10)
				{
					_putchar(' ');
				}
			}
			if (res > 9)
			{
				_putchar(res / 10 + '0');
			}
			_putchar(res % 10 + '0');
			if (b == 9)
			{
				_putchar('\n');
			}
			else
				_putchar(',');
		}
	}
}
