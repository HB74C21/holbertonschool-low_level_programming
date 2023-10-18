#include "main.h"
/**
 * print_line - Function that draws a straight line
 *
 * @n: This is integer
*/
void print_line(int n)
{
	int draws;

	if (n > 0)
	{
		for (draws = 0; draws < n; draws++)
			_putchar('_');
	}

	_putchar('\n');
}
