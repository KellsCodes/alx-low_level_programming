#include "main.h"

/**
 * print_sign - function that prints the sign of an input number
 *
 * @n: input number
 *
 * Return: 1 for n > 0, 0 for n == 0 and -1 for n < 0
 */
int print_sign(int n)
{
	char sign;
	int sign_value;

	if (n > 0)
	{
		sign = '+';
		sign_value = 1;
	} else if (n == 0)
	{
		sign = '0';
		sign_value = 0;
	} else
	{
		sign = '-';
		sign_value = -1;
	}
	_putchar(sign);
	return (sign_value);
}
