#include "main.h"

/**
 * puts2 - prints every other chars of a string, starting with first char
 * @str: pointer to the string value
 * Return: void
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;
	for (; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
