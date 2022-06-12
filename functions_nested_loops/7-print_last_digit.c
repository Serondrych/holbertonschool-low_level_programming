#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*
* @r: number
*
* Return: Always 0.
*/

int print_last_digit(int r)
{
	int i  = r % 10;

	if (r < 0)
	{
	i = i * -1;
	}
	_putchar (i + '0');
	return (i);
}
