#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 *
 * @a: This is a string
 * @n: This is a integer
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	n = n - 1;

	for (i = 0; i < n; i++, n--)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
	}
}
