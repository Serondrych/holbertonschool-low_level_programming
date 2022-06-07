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

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	char shift;

	for (shift = 'A'; shift <= 'Z'; shift++)
	{
		putchar(shift);
	}
		putchar('\n');
	return (0);
}
