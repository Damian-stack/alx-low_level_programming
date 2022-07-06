#include "main.h"

/**
 * main - this program prints _putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	int ii;
	char var[] = "_putchar";
	/*length of the array var*/
	int lenVar = sizeof(var) / sizeof(var[0]);

	for (ii = 0; ii < lenVar - 1; ii++)
	{
		_putchar(var[ii]);
	}
		_putchar('\n');

	return (0);
}
