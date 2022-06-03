#include <stdio.h>

/**
 * main - print numbers between 12 to 789.
 *
 * Return: Always 0
 */
int main(void)
{
	int f, e, g;

	f = 48;
	e = 48;
	g = 48;

	while (e < 58)
	{
		f = 48;
		while (f < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (e != f && e != g && f != g && e < f && f < g)
				{
					putchar(e);
					putchar(f);
					putchar(g);
					if (f == 56 && e == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
			}
			f++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
