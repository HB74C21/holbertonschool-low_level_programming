#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings
 *
 * @separator: Is the string to pe printed between numbers
 * @n: This is the number of integers passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;

	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char *);

		if (str != NULL)
		{
			printf("%s", str);

			if (i < n - 1)
				printf("%s", separator);
		}

		else
		{
			printf("(nil)");

			if (i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(ap);

	printf("\n");
}
