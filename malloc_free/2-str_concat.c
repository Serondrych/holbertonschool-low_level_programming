#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer to string with s1 followed by s2, NULL if fails
*/

char *str_concat(char *s1, char *s2)
{
	int length1, length2, length3, i;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (*(s1 + length1) != '\0')
	{
		length1++;
	}

	length2 = 0;
	while (*(s1 + length2) != '\0')
	{
		length2++;
	}

	length3 = length1 + length2;

	array = (char *) malloc(length3 * sizeof(char) + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		array[i] = s1[i];
	for (i = 0; i < length2; i++)
		array[i + length1] = s2[i];

	return (array);
}
