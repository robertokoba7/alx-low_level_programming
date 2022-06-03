#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int p;

	for (p = 5; p < 15; p++)
	{
		putchar(p);
		if (p != 14)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
