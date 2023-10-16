#include "main.h"
/**
 * _islower - Function that check for lowercase character
 *
 * @c: This is a integer
 *
 * Return: 1 if c is lowercase, otherwise 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
