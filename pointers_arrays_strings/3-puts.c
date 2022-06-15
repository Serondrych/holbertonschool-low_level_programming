#include "main.h"

/**
* _puts - prints a string followed by a new line
* @s: string
*
* Return: Always 0.
*/
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0';)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
