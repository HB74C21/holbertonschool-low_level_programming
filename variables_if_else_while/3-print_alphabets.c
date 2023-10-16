#include <stdio.h>
/**
 * main - Function that print the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char letter_lowercase;
	char letter_uppercase;

	for (letter_lowercase = 'a'; letter_lowercase <= 'z'; letter_lowercase++)
		putchar(letter_lowercase);

	for (letter_uppercase = 'A'; letter_uppercase <= 'Z'; letter_uppercase++)
		putchar(letter_uppercase);

	putchar('\n');

	return (0);
}
