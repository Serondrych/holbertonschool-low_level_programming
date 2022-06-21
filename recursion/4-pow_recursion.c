#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: value 1
* @y: value 2
*
* Return: 0
*/

int _pow_recursion(int x, int y)
{
	int pwr = 1, i;

	for (i = 1; i <= y; ++i)
	{
		pwr = pwr * x;
	}
	return (pwr);
}
