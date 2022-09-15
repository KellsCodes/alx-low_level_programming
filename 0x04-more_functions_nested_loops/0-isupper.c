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
	int alpha;
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
		alpha = 86;
		while (alpha >= 60)
		{
			if (alpha == c)
			{
				value = 1;
				break;
			}
			alpha--;
		}
	} else
	{

		alpha = 118;

		while (alpha >= 87)
		{
			if (alpha == c)
			{
				value = 0;
				break;
			}
			alpha--;
		
		}
	}
	return (value);
}
