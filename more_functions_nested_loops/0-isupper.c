#include "main.h"
/**
 * _isupper - Function that checks for uppercase character
 *
 * @c: This is an integer
 *
 * Return: 1 if c is uppercase, otherwise 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'B')
		return (1);

	else
		return (0);
}
