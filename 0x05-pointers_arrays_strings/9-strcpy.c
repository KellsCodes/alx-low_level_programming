#include "main.h"

/**
 * _strcpy - copy str from a src pointer
 *
 * @dest: destination to to copy to
 * @src: src to copy from
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[len] != '\n')
	{
		len++;
	}

	for (; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
