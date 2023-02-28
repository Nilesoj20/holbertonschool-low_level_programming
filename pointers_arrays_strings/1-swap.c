#include "main.h"
/**
* swap_int - Entry point
* @a: First member
* @b: 
* Return: Always 0 (Success)
*/
void swap_int(int *a, int *b)
{
	int back;
	
	back = *a;
	*a = *b;
	*b = back;

}
