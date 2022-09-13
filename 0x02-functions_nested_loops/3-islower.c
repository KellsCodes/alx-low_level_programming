#include "main.h"

/**
 * _islower - check for low chars
 * @c: input character
 * Return: Always 1 if input character is lowercase else 0 if uppercase
 */
int _islower(int c)
{
	char alphabet = 'a';
	int lower_character = 0;

	while (alphabet <= 'z')
	{
		if (alphabet == c)
		{
			lower_character = 1;
			break;
		}
		alphabet++;
	}

	return (lower_character);
}
