#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array
* @n: number of elements
*
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int half = n / 2;
	int left, right, i;

	n -= 1;

	for (i = 0; i < half; i++)
	{
		left = a[n - i];
		right = a[i];
		a[i] = left;
		a[n - i] = right;
	}
}
