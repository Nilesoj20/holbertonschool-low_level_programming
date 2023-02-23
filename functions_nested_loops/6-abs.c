#include "main.h"
/**
* _abs - Entry point
* @c: the caracter in ASCII code
* Return: Always 0 (Success)
*/
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
