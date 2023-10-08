#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int flag;

	if (ht == NULL)
		return;

	flag = 0;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		if (node != NULL)
		{
			if (flag == 1)
				printf(", ");

			flag = 1;
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
