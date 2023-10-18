#include "main.h"
/**
 * print_triangle - Function that prints a triangle
 *
 * @size: This is the integer
*/
void print_triangle(int size)
{
	int row;
	int column;
	int triangle;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = row; column < size; column++)
				_putchar(' ');

			for (triangle = (size - row); triangle < size; triangle++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
