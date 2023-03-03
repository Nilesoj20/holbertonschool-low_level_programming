#include "main.h"
/**
* reverse_array - check the code
* @a: pointer
* @n: variable
* Return: Always void.
*/
void reverse_array(int *a, int n)
{
	int cont, i;

	cont = 0;
	while (cont < n--)
	{
		i = a[cont];
		a[cont] = a[n];
		a[n] = i;
		cont++;
	}
}
