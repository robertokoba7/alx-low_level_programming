#include <stdio.h>

/**
 * fibonacci_numbers - prints first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, boolean, boolean2;
	long int l1, l2, fl, fl2, l11, l22;

	l1 = 1;
	l2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", l1, l2);
	for (a = 0; a < 96; a++)
	{
		if (boolean)
		{
			fl = l1 + l2;
			printf(", %ld", fl);
			l1 = l2;
			l2 = fl;
		}
		else
		{
			if (boolean2)
			{
				l11 = l1 % 1000000000;
				l22 = l2 % 1000000000;
				l1 = l1 / 1000000000;
				l2 = l2 / 1000000000;
				boolean2 = 0;
			}
			fl2 = (l11 + l22);
			fl = l1 + l2 + (fl2 / 1000000000);
			printf(", %ld", fl);
			printf("%ld", fl2 % 1000000000);
			l1 = l2;
			l11 = l22;
			l2 = fl;
			l22 = (fl2 % 1000000000);
		}
		if (((l1 + l2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}


