#include "main.h"

/**
 * print_most_numbers - prints int numbers 0 to 9 except 2 and 4
 *
 * Return: Always void.
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; ++i)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
