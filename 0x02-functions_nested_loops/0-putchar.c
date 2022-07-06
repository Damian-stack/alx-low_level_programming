#include "main.h"

/**
 * main - this program prints _putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 0
	char text[] = "_putchar";

	while (text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
