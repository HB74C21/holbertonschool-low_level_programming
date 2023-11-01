#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that multiplies two numbers and print the result
 *
 * @argc: The total number of arguments passed, including the program name.
 * @argv: An array of strings representing the arguments.
 *
 * Return: Always 0 (success), or 1 for Error
*/
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
