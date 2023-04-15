#include "hash_tables.h"
/**
 * hash_table_delete - elimina una tabla hash
 * @ht: tabla hash
 * Return: Always 0.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *tmp2;

	if (ht)
	{
		i = 0;
		while (i < ht->size)
		{
			tmp = ht->array[i];
			tmp2 = tmp;
			while (tmp != NULL)
			{
				tmp = tmp->next;
				free(tmp2->key);
				tmp2->key = NULL;
				free(tmp2->value);
				tmp2->value = NULL;
				free(tmp2);
				tmp2 = tmp;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
