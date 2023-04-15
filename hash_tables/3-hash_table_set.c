#include "hash_tables.h"
/**
 * hash_table_set - agrega un elemento a la tabla hash
 * @ht: tabla ya creada
 * @key: llave
 * @value: valor asignar
 * Return: 1 exito, 0 falla
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nodo;
	hash_node_t *tmp;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		nodo = malloc(sizeof(hash_node_t));
		if (!nodo)
			return (0);
		nodo->key = strdup(key);
		nodo->value = strdup(value);
		tmp = ht->array[index];
		nodo->next = tmp;
		ht->array[index] = nodo;
	}
	if (ht->array[index] == NULL)
	{
		nodo = malloc(sizeof(hash_node_t));
		if (!nodo)
			return (0);
		nodo->key = strdup(key);
		nodo->value = strdup(value);
		nodo->next = ht->array[index];
		ht->array[index] = nodo;
	}
	return (1);
}
