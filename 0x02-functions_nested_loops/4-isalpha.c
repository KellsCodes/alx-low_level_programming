#include "main.h"

/**
 * _isalpha - function that checks if input is a letter, lower or upper case
 * @c: input value
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	char letter = 'A';
	int is_alpha = 0;


	while (letter <= 'z')
	{
		if (letter == c)
		{
			is_alpha = 1;
			break;
		}
		letter++;
	}
	return (is_alpha);
}
