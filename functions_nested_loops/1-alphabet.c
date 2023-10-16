#include "main.h"
/**
 * print_alphabet - Function thar prints the alphabet in lowercase
*/
void print_alphabet(void)
{
	char letter_lowercase;

	for (letter_lowercase = 'a'; letter_lowercase <= 'z'; letter_lowercase++)
		_putchar(letter_lowercase);

	_putchar('\n');
}
