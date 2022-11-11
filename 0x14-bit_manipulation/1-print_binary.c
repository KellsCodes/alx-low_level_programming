#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
	else
		_putchar(n);
}
