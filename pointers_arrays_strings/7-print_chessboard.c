#include "main.h"
/**
* print_chessboard - check the code
* @a: pointer
* Return: Always 0.
*/
void print_chessboard(char (*a)[8])
{
	int contc, contf;

	contc = 0;
	while (contc < 8)
	{
		contf = 0;
		while (contf < 8)
		{
			_putchar(a[contc][contf]);
			contf++;
		}
		_putchar('\n');
		contc++;
	}
}
