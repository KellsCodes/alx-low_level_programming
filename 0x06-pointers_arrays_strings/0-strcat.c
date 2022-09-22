#include "main.h"
/**
 * _strcat - concatenates two string values
 *
 * @dest: pointer to destination of string
 * @src: pointer to src of first string
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
