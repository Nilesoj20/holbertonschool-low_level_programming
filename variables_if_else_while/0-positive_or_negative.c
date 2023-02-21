#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* genera números aleatorios al iniciar*/
	n = rand() - RAND_MAX / 2; /* generara un número aleatorio en n */

	if (n > 0)/* Si es = a 0 es positivo*/
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0) /* Es igual a 0 */
	{
		printf("%d is zero\n", n);
	}
	else /* Entonces es negativo*/
	{
		 printf("%d is negative\n", n);
	}
	return (0);
}
