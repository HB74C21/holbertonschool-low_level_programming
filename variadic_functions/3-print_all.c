#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * type_c - Function that print the type char
 * @ap: This is a list of argument pointed to a type char
*/
void type_c(va_list ap)
{
	char letter;

	letter = va_arg(ap, int);

	printf("%c", letter);
}
/**
 * type_i - Function that print the type int
 * @ap: This is a list of argument pointed to a type int
*/
void type_i(va_list ap)
{
	int num;

	num = va_arg(ap, int);

	printf("%i", num);
}

/**
 * type_f - Function that print the type float
 *
 * @ap: This is a list of argument pointed to a type float
*/
void type_f(va_list ap)
{
	float number;

	number = va_arg(ap, double);

	printf("%f", number);
}

/**
 * type_s - Function that print the type string
 *
 * @ap: This is a list of argument pointed of a type char*
*/
void type_s(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);
}

/**
 * print_all - Function that print all type
 *
 * @format: The list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;

	char *separator = "";

	va_list ap;

	op_t ops[] = {
		{"c", type_c},
		{"i", type_i},
		{"f", type_f},
		{"s", type_s},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (ops[j].f != NULL)
		{
			if (format[i] == *(ops[j].op))
			{
				printf("%s", separator);
				ops[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);

	printf("\n");
}
