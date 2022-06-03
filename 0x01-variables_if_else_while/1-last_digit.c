#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if the number is greater than 5, is less than 6, or is 0
 *Return: Alwsays 0
 */
int main(void)
{
	int n, (0)

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (0 > 5)
	{
		printf("Last digit  of %d is %d and is greater than 5\n", n, 0);
	}
	else if (0 < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 0);
	}
	else
	{
		printf("Last digit of % is %d and is 0\n", n, 0);
	}
	return (0);
}

