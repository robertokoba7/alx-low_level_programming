#include "main.h"

/**
 * _memset - fills the memory with a constant byte,
 * @s: pointer to the memory location
 * @b: constant byte
 * @n: bytes to be filled.
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
