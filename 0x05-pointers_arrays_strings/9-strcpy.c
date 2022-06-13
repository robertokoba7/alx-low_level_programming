#include "main.h"

/**
 * *_strcpy - copies string to pointer
 * @dest: destination
 * @src: string
 *
 * Return: pointer destinatiom
 */
char *_strcpy(char *dest, char *src)
{
	int m, x;

	m = 0;

	while (src[m] != '\0')
		m++;

	for (x = 0; x < m; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}


