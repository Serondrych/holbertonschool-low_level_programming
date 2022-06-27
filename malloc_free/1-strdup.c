#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string
* Return: pointer to the duplicated string or NULL if no memory available
*/

char *_strdup(char *str)
{
	int length, i;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	array = malloc(length * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';

	return (array);
}
