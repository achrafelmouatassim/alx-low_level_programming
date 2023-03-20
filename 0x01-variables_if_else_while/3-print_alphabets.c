#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowrcase then in uppercase
 *
 * Return: alwys 0 (seccess)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* print a - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	/* print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
