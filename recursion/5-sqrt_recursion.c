#include "main.h"

/**
* chk - checks integer for square root
* @sq: square integer
* @i: integer
* Return: 1 if true
*/

int chk(int sq, int i)
{
	if (i * i == sq)
		return (i);
	else if (i > sq / i)
		return (chk(sq, i - 1));
	else if (i < sq / i)
		return (chk(sq, i + 1));
	else
		return (-1);
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number
*
* Return: 0
*/

int _sqrt_recursion(int n)
{
	int start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (chk(n, start));
}
