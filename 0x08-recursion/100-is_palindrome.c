#include "main.h"

/**
 * ispalindrome - detects if is a palindrone.
 * @s: string
 * @i: integer pointing the beginning
 * @j: integer pointing to the end.
 * Return: 1 if parlindrom, 0 otherwise.
 */
int ispalindrome(char *s, int i, int j)
{
	if (i == j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	if (i < j)
		return (ispalindrome(s, i + 1, j - 1));
	return (1);
}
/**
 * is_palindrome - returns, 0 if not otherwise 1.
 * @s: string
 * Return: 0 if not otherwise 1.
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (ispalindrome(s, 0, _strlen_recursion(s) - 1));
}
/**
 * _strlen_recursion - prints a string.
 * @s: string.
 * Return:string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
