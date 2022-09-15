#include "main.h"

/**
 * _isdigit - checks if number is a digit
 *
 * @c: input value
 *
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	int isdigit = 0;

	if (c >= 48 && c <= 57)
		isdigit = 1;
	return (isdigit);
}
