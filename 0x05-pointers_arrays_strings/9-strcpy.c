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
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (temp);
}
