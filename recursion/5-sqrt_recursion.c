#include "main.h"
/**
 * find_sqrt_recursive - Function that finds the natural square root of
 *			 an inputted number recursively
 * @num: The number to find the square root of
 * @guess: The current guess for the square root.
 *
 * Return: If the number has a natural square root, return the square root
 *	If the number does not have a natural square root, return -1
*/
int find_sqrt_recursive(int num, int guess)
{
	if ((guess * guess) == num)
		return (guess);

	if (guess * guess > num || guess == num / 2)
		return (-1);

	return (find_sqrt_recursive(num, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number to find the square root of.
 *
 * Return: If n has a natural square root, return the natural square root of n
 *		If n does not have a natural square root, return -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt_recursive(n, 0));
}
