#include "main.h"

/*function that prints the alphabets*/
/**
 * print_alphabet - function that prints the 26 english letters in lowercase
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
