#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse using recursion
* @s: string
*
* Return: 0
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(*(s + 0));
	}
	else
	{
		_putchar('\n');
		return;
	}
}
