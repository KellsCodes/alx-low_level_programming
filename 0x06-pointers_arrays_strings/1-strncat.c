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
	char *temp = dest, *start = src;
	int i = 0, src_len = 0;

	while (*dest)
		dest++;
	while (*src)
	{
		src++;
		src_len++;
	}

	if (n > src_len)
		n = src_len;

	src = start;

	for (; i < n; ++i)
		*dest++ = *src++;

	return (temp);
}
