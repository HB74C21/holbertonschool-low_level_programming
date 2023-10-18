#include "main.h"
/**
 * _isdigit - Function that checks for a digit (0 throught 9)
 *
 * @c: This is a integer
 *
 * Return: 1 if c is digit, otherwise 0
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
