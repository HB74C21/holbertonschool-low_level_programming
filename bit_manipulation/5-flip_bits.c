#include "main.h"
/**
 * flip_bits - Function that returns the number of bits to flip to get
 *		from one number to another
 *
 * @n: The first number
 * @m: The second numbe.
 *
 * Return: The number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int bit_difference = 0;

	xor_result = n ^ m;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		bit_difference++;
	}

	return (bit_difference);
}
