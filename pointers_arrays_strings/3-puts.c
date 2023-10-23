#include "main.h"
/**
 * _puts - Function that print a string
 *
 * @str: This is a string
*/
void _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}

	_putchar('\n');
}
