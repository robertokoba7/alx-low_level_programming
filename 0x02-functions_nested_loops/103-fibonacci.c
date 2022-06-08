#include <stdio.h>
/**
 * main - Prints the add of the even-valued fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int l1, l2, fl, afl;

	l1 = 1;
	l2 = 2;
	fl = afl = 0;
	while (fl <= 4000000)
	{
		fl = l1 + l2;
		l1 = l2;
		l2 = fl;
		if ((l1 % 2) == 0)
		{
			afl += l1;
		}
	}
	printf("%ld\n", afl);
	return (0);
}
