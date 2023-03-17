#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'i'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
