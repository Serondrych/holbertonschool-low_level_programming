#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: array
* @n: times to print
*
* Return: Always 0.
*/
void print_array(int *a, int n)
{
	int i, times;

	i = 0;
	times = 1;

	if (n < 0)
	{
		n = 0;
	}
	if (n > 0)
	{
		for (; a[i] != '\0' && times < n;)
		{
			printf("%d, ", a[i]);
			i++;
			times++;
		}
		printf("%d\n", a[i]);
	}
}
