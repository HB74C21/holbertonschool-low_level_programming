#include "main.h"
/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 *
 * @n: This is an integer
*/
void print_diagonal(int n)
{
	int draws;
	int line;

	if (n > 0)
	{
		for (draws = 0; draws < n; draws++)
		{
			for (line = 1; line <= draws; line++)
			{
				_putchar(' ');

				if (line == draws)
					_putchar('\\');
			}

			if (draws == 0)
				_putchar('\\');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
