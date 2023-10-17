#include "main.h"
/**
 * times_table - Function that prints the 9 times table startinh with 0
*/
void times_table(void)
{
	int num;
	int num1;

	for (num = 0; num <= 9; num++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
			if ((num * num1) > 9)
			{
				_putchar('0' + ((num * num1) / 10));
				_putchar('0' + ((num * num1) % 10));
			}

			else
			{
				if (num1 > 0)
				{
					_putchar(' ');
				}

				_putchar('0' + (num * num1));
			}

			if (num1 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
