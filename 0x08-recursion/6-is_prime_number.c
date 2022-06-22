#include "main.h"

/**
 * is_prime -wrapper function to check for prime.
 * @n: input number.
 * @i: factor to check if n is divisible.
 * Return: 1 if prime, 0 if not else recurse.
 */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - checks if input integer is prime number.
 * @n: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
