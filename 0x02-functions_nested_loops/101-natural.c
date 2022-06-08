#include <stdio.h>

/**
 * main - Print natural numbers below 1024 that are multiple of 3 and 5.
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			y += x;
	}
	printf("%d\n", y);
	return (0);
}
