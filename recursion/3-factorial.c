#include "main.h"
/**
 * factorial - Function that return the factorial of a given number
 *
 * @n: This is a integer
 *
 * Return: -1 if n is lower than 0 to indicate an error else return 1 if n = 1
 *	otherwise return the factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
