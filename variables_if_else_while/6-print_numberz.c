#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int single_digit;

	for (single_digit = '0'; single_digit <= '9'; single_digit++)
		putchar(single_digit);

	putchar('\n');

	return (0);
}
