#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - sum function
* @a: first integer
* @b: second integer
* Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);	
}

/**
* op_sub - substraction function
* @a: first integer
* @b: second integer
* Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);	
}

/**
* op_mul - multiplication function
* @a: first integer
* @b: second integer
* Result: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division function
* @a: first integer
* @b: second integer
* Return: a / b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error 100\n");
		exit (100);
	}
	return (a / b);
}

/**
* op_mod - module function
* @a: first integer
* @b: second integer
* Result: remainder of division
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error 100\n");
		exit(100);
	}
	return (a % b);
}
