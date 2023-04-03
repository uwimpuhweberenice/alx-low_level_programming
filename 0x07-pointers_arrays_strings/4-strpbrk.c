#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 *
 * Return: pointer to byte in s that matches with one in accept,
 * otherwise null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
}
