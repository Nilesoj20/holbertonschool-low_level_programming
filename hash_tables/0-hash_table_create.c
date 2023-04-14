#include "hash_tables.h"
/**
 * hash_table_create - crea una nueva tabla
 * @size: tamaño
 * Return: un puntero a la nueva tabla.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *tabla;

	tabla = malloc(sizeof(*tabla));
	if (tabla == NULL)
		return (NULL);
	tabla->size = size;
	tabla->array = malloc(sizeof(hash_node_t *) * size);
	if (tabla->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		(tabla->array)[i] = NULL;
	}
	return (tabla);
}
