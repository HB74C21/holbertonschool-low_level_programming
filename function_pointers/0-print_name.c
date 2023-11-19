#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function that prints a name
 *
 * @name: This is the name to prints
 * @f: This is a pointer to the function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name !=  NULL && f != NULL)
		f(name);
}
