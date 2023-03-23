#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((size - i - 1) > j)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
