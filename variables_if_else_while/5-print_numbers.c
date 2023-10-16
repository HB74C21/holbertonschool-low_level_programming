#include <stdio.h>
/**
 * main - function that prints all single digit numbers of base 10
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int single_digit;

	for (single_digit = 0; single_digit <= 9; single_digit++)
		printf("%d", single_digit);

	printf("\n");

	return (0);
}

