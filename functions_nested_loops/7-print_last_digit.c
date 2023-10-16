#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 *
 * @n: This is a integer
 *
 * Return: The value of the last digit
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n > 0)
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}

	else
	{
		_putchar('0' + -last_digit);
		return (-last_digit);
	}
}
