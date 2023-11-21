#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - Function that prints numbers
 *
 * @separator: Is the string to pe printed between numbers
 * @n: This is the number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;

	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);

		if (i < n - 1)
			printf("%d%s", num, separator);

		else
			printf("%d", num);
	}
	printf("\n");
}
