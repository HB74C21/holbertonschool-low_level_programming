#include <stdio.h>
/**
 * main - Function that prints all arguments it receives
 *
 * @argc: This is a number of argument passed
 * @argv: An array of strings representing the arguments.
 *
 * Return: Always 0 (success)
*/
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
