#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to be deleted
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp, *node_linked;

	if (ht == NULL)
		return;


	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		if (node != NULL)
		{
			node_linked = node->next;
			free(node->key);
			free(node->value);
			while (node_linked)
			{
				temp = node_linked->next;
				free(node_linked->key);
				free(node_linked->value);
				free(node_linked);
				node_linked = temp;
			}
			free(node);
		}
	}

	free(ht->array);
	free(ht);
}
