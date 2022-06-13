#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer, from 00:00 to 23:5
*
* Dscription: Jack Bauer 24 clock
*
* Return: Always 0.
*/

void jack_bauer(void)
{
	int hr10, hr01, min10, min01, hr24;

	hr24 = 58;
	hr10 = '0';
	while (hr10 < '3')
	{
		if (hr10 == '2')
		{
			hr24 = '4';
		}
		hr01 = '0';
		while (hr01 < hr24)
		{
			min10 = '0';
			while (min10 < '6')
			{
				min01 = '0';
				while (min01 < 58)
				{
					_putchar(hr10);
					_putchar(hr01);
					_putchar(':');
					_putchar(min10);
					_putchar(min01);
					_putchar('\n');
					min01++;
				}
				min01 = '0';
				min10++;
			}
			min10 = '0';
			hr01++;
		}
		hr01 = '0';
		hr10++;
	}
}
