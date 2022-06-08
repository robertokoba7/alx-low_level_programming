#include <stdio.h>

/**
 * main - Prints sum of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int y;
	long int x1, x2, nx;

	x1 = 1;
	x2 = 2;

	printf("%ld, %ld", x1, x2);
	for (y = 0; y < 48; y++)
	{
		nx = x1 + x2;
		printf(", %ld", nx);
		x1 = x2;
		x2 = nx;
	}
	printf("\n");
	return (0);
}
