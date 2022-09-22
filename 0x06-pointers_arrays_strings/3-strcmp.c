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
	int s1_len = 0, s2_len = 0, value;

	while (*s1)
	{
		s1_len++;
		s1++;
	}

	while (*s2)
	{
		s2_len++;
		s2++;
	}

	if (s1_len == s2_len)
		value = 0;
	else if (s1_len > s2_len)
		value = 15;
	else
		value = -15;
	return (value);
}
