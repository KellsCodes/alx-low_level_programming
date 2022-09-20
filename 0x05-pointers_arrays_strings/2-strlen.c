#include "main.h"

/**
 * _strlen - gets the length of a string
 *
 * @s: passed in data for the argument
 * Return: Always an int value
 */
int _strlen(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
