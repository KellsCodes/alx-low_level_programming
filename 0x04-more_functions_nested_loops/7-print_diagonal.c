#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 *
 * @n: value of diagonal to be drawn
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; ++i)
	{
		for (j = 0; j <= i; ++j)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
