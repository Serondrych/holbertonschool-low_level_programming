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

	for (i = 0; str[i] != '\0'; i++)

	max = i;
	j = max / 2;

	for (; j <= max;)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
