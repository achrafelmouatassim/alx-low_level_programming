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
	printf("The size of char: %u bytes\n", sizeof(char));
	printf("The size of int: %u bytes\n", sizeof(int));
	printf("The size of long: %u bytes\n", sizeof(long));
	printf("The size of float: %u bytes\n", sizeof(float));
	printf("The size of long double: %u bytes\n", sizeof(long long int));
	return (0);
}
