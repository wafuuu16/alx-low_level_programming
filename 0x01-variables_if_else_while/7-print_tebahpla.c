#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char z;

	for (z = 'z'; z >= 'a' ; z--)
		putchar(z);
	putchar('\n');
	return (0);
}
