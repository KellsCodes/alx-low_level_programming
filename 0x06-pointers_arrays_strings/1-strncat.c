#include "main.h"
/**
 * _strncat - concatenates two strings using at least n bytes
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (temp);
}
