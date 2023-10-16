#include <stdio.h>
/**
 * main - Function that the alphabet in lowercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char letter_lowercase;

	for (letter_lowercase = 'a'; letter_lowercase <= 'z'; letter_lowercase++)
		putchar(letter_lowercase);

	putchar('\n');

	return (0);
}
