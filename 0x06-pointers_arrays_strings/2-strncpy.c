#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: number to copy upto
 * Return: characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
