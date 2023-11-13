#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Function that initialize a variable
 *
 * @d: Pointer to struct
 * @name: This is a name
 * @age: This is a age
 * @owner: This is a owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
