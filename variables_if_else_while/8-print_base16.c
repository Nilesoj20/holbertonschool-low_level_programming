#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int x;

	n = 0;
	x = 'a';

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	for (x = 'a'; x <= 'f'; n++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

