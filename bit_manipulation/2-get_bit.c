#include "main.h"
/**
 * get_bit - encuentra el indice solicitado
 * @n: numero decimal
 * @index: indice a busacar
 * Return: devuelve el valor de un bit en un índice dado
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valor;

	if (index > 63)
	{
		return (-1);
	}
	valor = (n >> index) & 1;
	return (valor);
}
