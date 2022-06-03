#include <stdio.h>

/**
 * main - print all alphabet except e and q
 *
 * Return: Always 0
 */
int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int j;

	for (j = 0; j < 24; j++)
	{
		putchar(alph[j]);
	}
	putchar('\n');
	return (0);
}
