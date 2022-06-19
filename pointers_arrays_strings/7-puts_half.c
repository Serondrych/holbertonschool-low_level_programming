#include "main.h"

/**
* puts_half - prints half of a string
* @str: string
*
* Return: Always 0.
*/
void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	for (; str[i] != '\0';)
	{
		i++;
	}

	max = i;
	j = max / 2;

	for (; j < max + 1;)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
