#include "main.h"

/**
 * _puts - prints the str characters
 * @str: pointer to the str value
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
