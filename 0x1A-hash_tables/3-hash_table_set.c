#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to add or update the key/value
 * @key: key to be added; cannot be an emty string
 * @value: value associated with the key; can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node, *temp;

	if (key == NULL)
		return (0);

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	if (current_node == NULL)
		ht->array[index] = new_node;

	else if (strcmp(current_node->key, key) == 0)
		strcpy(ht->array[index]->value, value);

	else
	{
		temp = current_node;

		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
	}

	return (1);
}


/**
 * create_node - function to create node for key/value element
 * @key: key of element
 * @value: value of element
 *
 * Return: returns the node created if successful, otherwise NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = (char *) malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);

	node->value = (char *) malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}
