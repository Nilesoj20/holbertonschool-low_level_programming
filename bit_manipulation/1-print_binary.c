#include "main.h"
/**
 * print_binary - imprime binario
 * @n: numero decimal
 * Return: void main
 */
void print_binary(unsigned long int n)
{
	unsigned long int filtro;
	int size_numero, contador;

	filtro = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	size_numero = sizeof(unsigned long int) * 8;
	contador = 0;
	while (filtro > 0)
	{
		if ((n & filtro) == filtro)
		{
			_putchar('1');
			contador++;
		}
		else if (contador > 0)
		{
			_putchar('0');
			contador++;
		}
		filtro = filtro >> 1;
		if (contador == size_numero)
			break;
	}
	if (contador == 0)
	{
		_putchar('0');
	}
}
