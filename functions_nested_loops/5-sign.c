#include "main.h"

/**
* print_sign - checks the sign of a number
*
* @n: character
*
* Return: Always 0.
*/

int print_sign(int n)
{
	if (n > 0)
		return (_putchar('+') & (1));
	if (n < 0)
		return (_putchar('-') & (-1));
	else
		return (_putchar('0') & (0));
}
