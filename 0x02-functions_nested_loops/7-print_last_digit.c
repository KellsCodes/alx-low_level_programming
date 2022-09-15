#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @digits: input value
 * Return: Always return value of last digit
 */
int print_last_digit(int digits)
{
	_putchar((digits % 10) + '0');
	return (digits % 10);
}
