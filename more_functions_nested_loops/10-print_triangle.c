#include "main.h"

/**
* print_triangle - print a triangle
* @size: size of the triangle
*
* Return: void
*/

void print_triangle(int size)
{
	int line = 0;
	int spaces;
	int fill;

	if (size > 0)
	{
		while (line < size)
		{
			for (spaces = size - 1; spaces > line; spaces--)
			{
				_putchar(' ');
			}
			for (fill = 0; fill < line + 1; fill++)
			{
				_putchar('#');
			}
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
