#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	n = 'z';

	for (n = 'z'; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
