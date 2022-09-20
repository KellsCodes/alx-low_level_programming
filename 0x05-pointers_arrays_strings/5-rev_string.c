#include "main.h"

/**
 * rev_string - reverses string in order
 *
 * @s: input value pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp_char_swap;

	while (s[len] != '\0')
	{
		len++;
	}


	while (i < len--)
	{
		temp_char_swap = s[i];
		s[i++] = s[len];
		s[len] = temp_char_swap;
	}

}
