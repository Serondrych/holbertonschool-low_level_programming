#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the result of a multiplication
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
