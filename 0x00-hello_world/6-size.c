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
	printf("The size of char: %lu byte(s)\n", sizeof(char));
	printf("The size of int: %lu byte(s)\n", sizeof(int));
	printf("The size of long: %lu byte(s)\n", sizeof(long));
	printf("The size of float: %lu byte(s)\n", sizeof(float));
	printf("The size of long double: %lu byte(s)\n", sizeof(long long int));
	return (0);
}
