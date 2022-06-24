#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - adds two positive numbers
 * @argc: number of command lines arguments
 * @argv: array that contains the program command line arguments.
 */
int main(int argc, char *argv[])
{
	int i, k, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (!isdigit(argv[i][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
