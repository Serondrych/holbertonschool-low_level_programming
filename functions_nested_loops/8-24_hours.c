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
	int hr_10, hr_01, min_10, min_01, hr_24;

	hr_24 = 58;
	hr_10 = '0';
	while (hr_10 < '3')
	{
		if (hr_10 == '2')
		{
			hr_24 = '4';
		}
	hr_01 = '0';
	while (hr_01 < hr_24)
	{
		min_10 = '0';
		while (min_10 < '6')
		{
			min_01 = '0';
			while (min_01 < 58)
			{
				_putchar(hr_10);
				_putchar(hr_01);
				_putchar(':');
				_putchar(min_10);
				_putchar(min_01);
				_putchar('\n');
				min_01++;
			}
		}
		min_01 = '0';
		min_10++;
	}
	min_10 = '0';
	hr_01++;
	}
}
