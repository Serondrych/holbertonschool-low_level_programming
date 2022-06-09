#include "main.h"

/**
* print_alphabet - prints the alphabet
* print_alphabet_x10 - prints the alphabet ten times
* c: characters
* i: numbers
*
* Return: Always 0.
*/
void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int num = 48;

	for (; num < 57; num++)
	{
	print_alphabet();
	}
}
