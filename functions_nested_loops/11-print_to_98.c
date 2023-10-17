#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function that prints all naturel numbers of n to 98
 *
 * @n: This is the numbers naturel
*/
void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num <= 98; num++)
		{
			printf("%d", num);

			if (num < 98)
				printf(", ");
		}
	}

	if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);

			if (num > 98)
				printf(", ");
		}
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
