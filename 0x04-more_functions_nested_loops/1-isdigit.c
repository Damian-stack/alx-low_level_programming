#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the character to be checked
 *
 * Return: 1 if there is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}

