#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 48;
	int let = 97;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (let < 103)
	{
		putchar(let);
		let++;
	}
	putchar(10);
	return (0);
}
