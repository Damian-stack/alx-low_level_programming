#include<stdio.h>
/**
 * main - prints out the last part of a quote in the standard errror
 *
 * Return: 1 (success)
 */
int main(void)
{
	char var[] = "and that piece of art is useful\" - Dora korpas, 2015-10-19\n";
		write(2, var, sizeof(var) - 1);
	return (1);
}
