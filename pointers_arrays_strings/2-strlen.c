#include "main.h"

/**
* _strlen - returns the lenght of a string
* @s: string
*
* Return: Always 0.
*/

int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (i);
}
