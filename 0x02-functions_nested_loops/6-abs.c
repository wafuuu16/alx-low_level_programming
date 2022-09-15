#include "main.h"

/**
 * _abs - returns absolute value of an int
 * @n: integer for which absolute value is gotten
 * Return: void
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
