#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowrcase then in uppercase
 *
 * Return: alwys 0(seccess)
 */

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/* print a - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	/* print A - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
