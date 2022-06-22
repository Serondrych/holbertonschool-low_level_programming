#include <stdio.h>
#include <stdlib.h>

/**
* num - checks if input is a number
* @s: input
* Return: 1 for true, 0 if false
*/

int num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
* main - adds positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, sum, num_ok;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc;)
		{
			num_ok = num(argv[i]);
			if (num_ok == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
