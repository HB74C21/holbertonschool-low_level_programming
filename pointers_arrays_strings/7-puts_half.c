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

	while (string < count / 2)
		string++;

	while (str[string])
	{
		_putchar(str[string]);
		string++;
	}

	_putchar('\n');
}
