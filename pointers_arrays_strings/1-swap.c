#include "main.h"

/**
* swap_int - swap the vaules of two integers
* @a: integer 1
* @b: integer 2
*
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
