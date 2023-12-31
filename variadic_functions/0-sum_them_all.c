#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters
 *
 * @n: This is a integer
 *
 * Return: The results of the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
