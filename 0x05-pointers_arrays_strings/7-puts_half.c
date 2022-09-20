#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len = 0, i;

	for (; str[len] != '\0';)
		len++;

	i = len / 2;

	while (i <= len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
