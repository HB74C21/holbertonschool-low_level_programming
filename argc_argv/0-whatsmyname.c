#include <stdio.h>
/**
 * main - Function that prints its name
 *
 * @argc: this is integer
 * @argv: this is a character
 *
 * Return: Always 0 (success)
*/
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
