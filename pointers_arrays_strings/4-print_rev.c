#include "main.h"
/**
 * print_rev - Function that prints a string in reverse
 *
 * @s: This is a string
*/
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	count = count -1;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}

	_putchar('\n');
}
