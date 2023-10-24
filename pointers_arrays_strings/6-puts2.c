#include "main.h"
/**
 * puts2 - Function that prints every other character of a string,
 *	starting with the first character
 * @str: This is a string
*/
void puts2(char *str)
{
	int string = 0;

	while (*(str + string))
	{
		if (string % 2 == 0)
		{
			_putchar(*(str + string));
		}

		string++;
	}

	_putchar('\n');
}
