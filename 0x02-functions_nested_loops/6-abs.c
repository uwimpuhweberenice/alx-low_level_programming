#include "main.h"

/**
 * _abs - computes the absolute value
 * @n: takes in an integer
 * Return: n * -1 if n is negative,
 * otherwise returns n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
