#include "main.h"
/**
 * _puts_recursion - a function that prints a new line
 *
 * @s: the string
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\n')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
