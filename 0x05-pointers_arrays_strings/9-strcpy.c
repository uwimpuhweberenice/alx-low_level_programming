#include "main.h"

/**
 * *_strcpy - copy string to buffer
 * @dest: pointer to buffer
 * @src: pointer to string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
