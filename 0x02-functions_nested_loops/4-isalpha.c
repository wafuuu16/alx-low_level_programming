#include "main.h"

/**
 * _isalpha - checks if character is a letter either uppercase or lowercse
 *
 * @c: takes input from other functions
 *
 * Return: 1 if true else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
