#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - the operator to add
 * @a: is a variable
 * @b: input value
 * Return: always return int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the operator to subtract
 * @a: input value
 * @b: input value
 * Return: always return int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the operator to multiply
 * @a: input value
 * @b: input value
 * Return: always return int
 */

int op_mul(int a, int b)
{

	return (a * b);
}

/**
 * op_div - the operator to divide
 * @a: input value
 * @b: input value
 * Return: always return int
 */

int op_div(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - the operator to modify
 * @a: input value
 * @b: input value
 * Return: always return int
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
