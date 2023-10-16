#include "main.h"
/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	int num;
	char letter_lowercase;

	for (num = '0'; num <= '9'; num++)
	{
		for (letter_lowercase = 'a'; letter_lowercase <= 'z'; letter_lowercase++)
			_putchar(letter_lowercase);

		_putchar('\n');
	}
}
