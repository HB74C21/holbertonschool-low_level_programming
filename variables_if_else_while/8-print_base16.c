#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int number_base_10;
	int number_base_16;

	for (number_base_10 = '1'; number_base_10 <= '9'; number_base_10++)
		putchar(number_base_10);

	for (number_base_16 = 'a'; number_base_16 <= 'f'; number_base_16++)
		putchar(number_base_16);

	putchar('\n');

	return (0);
}
