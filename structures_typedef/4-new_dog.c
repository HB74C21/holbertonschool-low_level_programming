#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - Function that returns the length of a string
 *
 * @s: This is a string
 *
 * Return: The value
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
/**
 * _strcpy - Function that copies the string pointed to by src, including the
 *		terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: this is a character
 * @src: this is a string
 *
 * Return: The value the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - Function that creates a new dog
 *
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The owner of dog
 *
 * Return: The struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogs;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_dogs = malloc(sizeof(dog_t));
	if (new_dogs == NULL)
		return (NULL);

	new_dogs->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dogs->name == NULL)
	{
		free(new_dogs);
		return (NULL);
	}

	new_dogs->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dogs->owner == NULL)
	{
		free(new_dogs->name);
		free(new_dogs);
		return (NULL);
	}

	new_dogs->name = _strcpy(new_dogs->name, name);
	new_dogs->age = age;
	new_dogs->owner = _strcpy(new_dogs->owner, owner);

	return (new_dogs);
}
