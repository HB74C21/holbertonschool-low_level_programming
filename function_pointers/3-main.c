#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function that performs simple operations
 *
 * @argc: argument
 * @argv: array of argument
 *
 * Return: Always 0(succes);
*/
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int num1, num2;
	char *func;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = argv[2];

	if (get_op_func(func) == NULL || func[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*func == '/' && num2 == 0) || (*func == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(func)(num1, num2));

	return (0);
}
