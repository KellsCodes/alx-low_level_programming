#include "main.h"

/**
 * print_rev - prints strings in reverse
 *
 * @s: input string as a pointer
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
