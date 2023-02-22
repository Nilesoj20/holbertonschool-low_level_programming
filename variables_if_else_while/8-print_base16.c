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

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}

