#include "main.h"
#include <stdio.h>
#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of the two diagonals
 *		of a square matrix of integer
 * @a: Pointer to a start of matrix
 * @size: This is a size of the square matrix
*/
void print_diagsums(int *a, int size)
{
	int row = 0;
	int col = 0;
	int main_diag_sum = 0;
	int anti_diag_sum = 0;

	for (row = 0; row < size; row++)
	{
		col = row;
		main_diag_sum += *(a + row * size + col);
	}

	for (row = 0; row < size; row++)
	{
		col = size - 1 - row;
		anti_diag_sum += *(a + row * size + col);
	}

	printf("%d, %d\n", main_diag_sum, anti_diag_sum);
}
