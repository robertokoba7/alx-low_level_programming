#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if the number is greater than 5, is less than 6, or is 0
 *Return: Alwsays 0
 */
int main(void)
{
	int n, a = 3;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (a > 5)
	{
		printf("Last digit  of %d is %d and is greater than 5\n", n, a);
	}
	else if (a < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	else
	{
		printf("Last digit of % is %d and is 0\n", n, a);
	}
	return (0);
}

