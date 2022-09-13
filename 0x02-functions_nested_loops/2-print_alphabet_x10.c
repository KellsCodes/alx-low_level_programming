#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times on the screen
 *
 * Return: null
 */
void print_alphabet_x10(void)
{
	int index = 0;

	while (index < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
			{
				_putchar(alphabet);
				alphabet++;
			}
		index++;
		_putchar('\n');
	}
}
