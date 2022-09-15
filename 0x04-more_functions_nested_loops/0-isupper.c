#include "main.h"
#include <stdio.h>
/**
 * _isupper - funtion checking the case of a charater
 *
 * @c: the passed in character
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	int value = 0;

	if (c < 60)
	{
		value = 0;
	} else
	if (c > 118)
	{
		value = 0;
	} else
	if (c >= 60 && c <= 86)
	{
		value = 1;
	} else
	{

		value = 0;

	}
	return (value);
}
