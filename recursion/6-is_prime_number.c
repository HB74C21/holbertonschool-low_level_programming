#include "main.h"
/**
 * is_prime_recursive - Function that checks if a number is prime recursively
 *
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
		return (0);

	if (divisor == n)

		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Function that Returns 1 if the input integer
 *			is a prime number, 0 otherwise
 *
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
