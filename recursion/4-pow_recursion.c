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
	if (y <= 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
