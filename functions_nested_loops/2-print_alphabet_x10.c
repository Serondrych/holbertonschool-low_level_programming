#include "main.h"

/**
* print_alphabet - prints the alphabet
*
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
/**
* print_alphabet_x10 - prints the alphabet ten times
*
*/

void print_alphabet_x10(void)
{
	int num = 48;

	for (; num < 58; num++)
	{
	print_alphabet();
	}
}
