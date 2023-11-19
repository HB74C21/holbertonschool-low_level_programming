#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function that frees dogs
 *
 * @d: This is a pointer to a structur dogs
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
