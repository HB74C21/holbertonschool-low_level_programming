#include "main.h"
/**
 * more_numbers - Function that print 10 times the numbers from 0 to 14
*/
void more_numbers(void)
{
	int count;
	int number;

	for (count = 1; count <= 10; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				_putchar('0' + (number / 10));

			_putchar('0' + (number % 10));
		}

		_putchar('\n');

	}
}
