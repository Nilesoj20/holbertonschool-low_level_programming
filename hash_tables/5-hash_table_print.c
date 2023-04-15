#include "hash_tables.h"
/**
 * hash_table_print - imprime una tabla hash
 * @ht: tabla hash
 * Return: Always 0.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;


	if (ht)
	{
		putchar('{');
		i = 0;
	 	while (i < ht->size)
	 	{
			tmp = ht->array[i];
			while (tmp != NULL)
		 	{
			 	printf("'%s:%s'", ht->array[i]->key, ht->array[i]->value);
				tmp = tmp->next;
		 	}
		 	i++;
	 	}
		putchar('}');
		putchar('\n');
	}
}
