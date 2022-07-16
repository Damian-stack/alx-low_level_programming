#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
