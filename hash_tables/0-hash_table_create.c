#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_create - Functon that creates a hash table
 *
 * @size: This is a size of the array
 *
 * Return: A pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	new_table->size = size;

	new_table->array = calloc(new_table->size, sizeof(new_table->array));

	if (new_table->array == NULL)
		return (NULL);

	return (new_table);
}
