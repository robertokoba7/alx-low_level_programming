#include <stdio.h>

/**
 * main - print lower case in reverse
 * Return: always 0
 */
int main(void)
{
	char alph[26] = "zyxwvutsrqponmlkjihgfedcba";
	int m;

	for (m = 0; m < 26; m++)
	{putchar(alph[m]);
	}
	putchar('\n');
	return (0);
}
