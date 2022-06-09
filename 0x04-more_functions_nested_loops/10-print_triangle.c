#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: numbers of lines
 * Return:
 */
void print_triangle(int size)
{
	int j, k;

	for (j = 0; j < size; j++)
	{
		for (k = 1; k < (size - j); k++)
		_putchar(' ');
		for (k--; k < size; k++)
			_putchar(35);
		if (j < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

