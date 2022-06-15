#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int j, k, l;

	k = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		l = a[j];
		a[j] = a[k];
		a[k--] = l;
	}
}
