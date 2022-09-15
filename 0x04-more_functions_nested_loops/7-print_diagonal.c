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

	if (n > 0)
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= i; ++j)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
