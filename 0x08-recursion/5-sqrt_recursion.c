#include "main.h"

/**
 * otherr_sqrt - helps evaluate 1 to n
 * @a: is equal to number n
 * @b: iterates from 1 to n
 * Return: 1 if successful, -1 if error
 */

int otherr_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (otherr_sqrt(a, b + 1));
}

/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n: number
 *
 * Return: square root, otherwise -1
 */

int _sqrt_recursion(int n)
{
	return (otherr_sqrt(n, 1));
}
