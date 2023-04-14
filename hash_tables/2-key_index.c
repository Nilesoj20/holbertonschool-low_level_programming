#include "hash_tables.h"
/**
 * key_index - da el indice
 * @key: la llave
 * @size: tamaño de la matriz
 * Return: índice en el que se debe almacenar
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	
	index = hash_djb2(key);
	return (index % size);
}
