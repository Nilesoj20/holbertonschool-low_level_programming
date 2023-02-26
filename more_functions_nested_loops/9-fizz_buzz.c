#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if ((x % 5 == 0) && (x % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			if (x == 100)
			{
				printf("Buzz");
			}
			else
			{
			printf("Buzz ");
			}
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
