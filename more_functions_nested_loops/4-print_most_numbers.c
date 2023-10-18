#include "main.h"
/**
 * print_most_numbers - Function that prints the numbers from 0 to 9
 *			except 2 and 4
*/
void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number != '2' && number != '4')
			_putchar(number);
	}

	_putchar('\n');
}
