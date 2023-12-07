#include "main.h"
/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 *
 * @n: Pointer to the number to modify
 * @index: The index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_mask = 1;

	if (index >= sizeof(*n) * 8)
		return (-1);

	bit_mask <<= index;
	*n &= ~bit_mask;

	return (1);
}
