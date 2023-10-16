#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int letter_lowercase;

	for (letter_lowercase = 'z'; letter_lowercase >= 'a'; letter_lowercase--)
		putchar(letter_lowercase);

	putchar('\n');

	return (0);
}
