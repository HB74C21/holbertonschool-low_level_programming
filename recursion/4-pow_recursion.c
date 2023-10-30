#include "main.h"
/**
 * _pow_recursion - Function that return the value x raised to the power y
 *
 * @x: First integer
 * @y: Second integer
 *
 * Return: -1 If y is lower than 0, or 1 if y == 0, otherwase return the value
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
