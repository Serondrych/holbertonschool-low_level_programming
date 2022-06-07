#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char az;
	char shift;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}

	for (shift = 'A'; shift <= 'Z'; shift++)
	{
		putchar(shift);
	}
		putchar('\n');
	return (0);
}
