#include <stdio.h>
/**
 * main - Program that prints the numbers from 1 to 100, followed by a new line
 *	But for multiples of three print Fizz instead of the number and for the
 *	multiples of five print Buzz. For numbers which are multiples of both
 *	three and five print FizzBuzz
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int num;
	int end = 100;

	for (num = 1; num <= end; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");

			if (num < end)
				printf(" ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");

			if (num < end)
				printf(" ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");

			if (num < end)
				printf(" ");
		}
		else
		{
			printf("%d", num);

			if (num < end)
				printf(" ");
		}
	}
	printf("\n");

	return (0);
}
