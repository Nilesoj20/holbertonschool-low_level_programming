#include "hash_tables.h"
/**
 * hash_table_print - imprime una tabla hash
 * @ht: tabla hash
 * Return: Always 0.
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *tmp, *tmp2;

	if (!ht)
		return;
	tmp2 = NULL;
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			for (tmp = ht->array[i]; tmp; tmp = tmp->next)
			{
				if (tmp2)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp2 = tmp;
			}
		}
		putchar('}');
		putchar('\n');
}
