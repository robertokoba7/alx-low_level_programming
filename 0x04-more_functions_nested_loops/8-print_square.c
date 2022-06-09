#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: none
 */
void print_square(int size)
{
	int j, k;

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(35);
		}
		if (j != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
