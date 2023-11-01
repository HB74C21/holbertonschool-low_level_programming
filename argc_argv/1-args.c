#include <stdio.h>
/**
 * main - Function that print the numbers of arguments passed into it
 *
 * @argc: This is numbers of arguments passed
 * @argv: This is a argument passed
 *
 * Return: Always 0 (success)
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
