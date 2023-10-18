#include "main.h"
/**
 * print_numbers - Function that prints the numbers from O to 9
*/
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);

	_putchar('\n');
}
