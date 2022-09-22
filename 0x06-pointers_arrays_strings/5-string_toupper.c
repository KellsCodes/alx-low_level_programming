#include "main.h"

/**
 * string_toupper - converts lowercase chars to upper
 *
 * @ptr: pointer to the characters
 * Return: characters to uppercase
 */
char *string_toupper(char *ptr)
{
	char *temp = ptr;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (temp);
}
