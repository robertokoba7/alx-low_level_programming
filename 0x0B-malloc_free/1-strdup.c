#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars.
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int j, k;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	strout = (char *)malloc(sizeof(char) * (j + 1));

	if (strout == NULL)
		return (NULL);

	for (k = 0; k <= j; k++)
		strout[k] = str[k];

	return (strout);
}
