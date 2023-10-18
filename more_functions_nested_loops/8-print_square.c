#include "main.h"
/**
 * print_square - Function that prints a square
 *
 * @size: This is an integer
*/
void print_square(int size)
{
	int line;
	int square;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (square = 0; square < size; square++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
