#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should be printed
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
