#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	    int intType;
	    char charType;
	    long int longIntType;
	    long long int longlongIntType;
	    float floatType;

	    printf("Size of char: %zu byte\n", sizeof(charType));
	    printf("Size of int: %zu bytes\n", sizeof(intType));
	    printf("Size of long int: %zu bytes\n", sizeof(longIntType));
	    printf("Size of long long int: %zu bytes\n", sizeof(longlongIntType));
	    printf("Size of float: %zu bytes\n", sizeof(floatType));
}
