#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Print result of adding given arguments
 *
 * @argc: The number of command line arguments
 * @argv: An array containing the arguments
 *
 * Return: 0 on success, 1 if theres a nondigit arg
*/
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;
	int count = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}
