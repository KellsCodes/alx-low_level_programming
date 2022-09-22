#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 0 if strings are equal
 * 15 if s1 > s2
 * -15 if s2 > s1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s2++;
		s1++;
	}

	return (*s1 - *s2);
}
