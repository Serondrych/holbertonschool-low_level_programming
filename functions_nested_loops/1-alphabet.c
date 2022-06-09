#include "main.h"

/**
* print_alphabet - prints the alphabet
* c: characters
*
* Return: Always 0.
*/
int print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
		_putchar('\n');

	return (0);

}
