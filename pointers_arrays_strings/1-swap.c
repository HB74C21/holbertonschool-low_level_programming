#include "main.h"
/**
 * swap_int - Function that swapes the values of two integers
 *
 * @a: First integer
 * @b: Second integer
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
