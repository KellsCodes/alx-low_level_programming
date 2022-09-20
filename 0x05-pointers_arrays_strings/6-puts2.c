#include "main.h"

/**
 * puts2 - prints every other chars of a string, starting with first char
 * @str: pointer to the string value
 * Return: void
 */
void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len+=2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
