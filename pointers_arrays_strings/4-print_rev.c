#include "main.h"

/**
* print_rev - prints a string in reverse  followed by a new line
* @s: string
*
* Return: Always 0.
*/
void print_rev(char *s)
{
	int i = 0;

	for (; *s != '\0';)
	{
		s++;
		i++;
	}

	for (; i >= 0;)
	{
		s--;
		i--;
		if (*s != '\0')
		_putchar(*s);
	}
	_putchar('\n');
}
