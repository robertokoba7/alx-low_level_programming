#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotients two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers.
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division.
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



