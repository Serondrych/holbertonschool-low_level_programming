#include "main.h"

/**
* main - Check the code
*
* print_alphabet - Print from a to z
* Return: Always (0) (Success)
*
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
