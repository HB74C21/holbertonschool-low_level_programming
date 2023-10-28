#include "main.h"
/**
 * puts_half - Function that prints half of a string
 *
 * @str: This is a string
*/
void puts_half(char *str)
{
	int i = 0;
	int middle = 0;

	while (str[i])
		i++;

	for (middle = i / 2; str[middle] != '\0'; middle++)
	{
		if (i % 2 == 0)
			_putchar(str[middle]);

		else
			i++;

	}

	_putchar('\n');
}
