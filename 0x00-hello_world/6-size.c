#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using size of to print the size of varios types.
 *
 * Return: always o (success)
*/

int main(void)
{
	printf("The size of char is %lu bytes\n", sizeof(char));
	printf("The size of int is %lu bytes\n", sizeof(int));
	printf("The size of long is %lu bytes\n", sizeof(long));
	printf("The size of float is %lu bytes\n", sizeof(float));
	printf("The size of long double is %lu bytes\n", sizeof(long long int));
	return (0);
}
