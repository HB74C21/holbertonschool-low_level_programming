#include "main.h"
/**
 * rev_string - Function that reverses a string
 *
 * @s: This is a string
*/
void rev_string(char *s)
{
	int count, index;
	char swap;

	count = 0;

	while (s[count])
	{
		count++;
	}

	for (index = 0, count = count - 1; index < count; index++, count--)
	{
		swap = *(s + count);
		*(s + count) = *(s + index);
		*(s + index) = swap;
	}
}
