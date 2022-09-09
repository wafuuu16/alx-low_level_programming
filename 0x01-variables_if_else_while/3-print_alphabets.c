#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase then in upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		++ch;
	}
	putchar('\n');

	return (0);
}
