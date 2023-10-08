#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key to be checked
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should
 *			be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);
	return (i % size);
}
