#include "main.h"

/**
 * factorial - calculates factorial of a number
 * @n: number
 *
 * Return: factorial, -1 if n < 0, 1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
