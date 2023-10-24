#include "main.h"
/**
 * puts_half - Function that prints half of a string
 *
 * @str: This is a string
*/
void puts_half(char *str)
{
	int string = 0;
	int count = 0;

	while (str[count])
		count++;

	while (string < (count) / 2)
		string++;

	while (str[string])
	{
		if (count % 2 == 0)
		{
			_putchar(str[string]);
			string++;
		}
		else
			count++;
	}

	_putchar('\n');
}
