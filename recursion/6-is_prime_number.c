#include "main.h"
/**
 * is_prime_number - check the code
 * @n: variable
 * Return: 0 o 1.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (help2(n, 2));
}
/**
* help2 - check the code
* @n: variable
* @inicio: variable 2
* Return: 0 o 1
*/
int help2(int n, int inicio)
{
	if (inicio < n)
	{
		if (n % inicio == 0)
		{
			return (0);
		}
		return (help2(n, inicio + 1));
	}
		return (1);
}
