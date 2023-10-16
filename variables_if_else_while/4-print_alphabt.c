#include <stdio.h>
/**
 * main - Function that the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char letter_lowercase;

	for (letter_lowercase = 'a'; letter_lowercase <= 'z'; letter_lowercase++)
	{
		if ((letter_lowercase == 'e') || (letter_lowercase == 'q'))
			continue;

		putchar(letter_lowercase);
	}

	putchar('\n');

	return (0);
}
