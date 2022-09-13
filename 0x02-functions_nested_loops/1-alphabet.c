#include "main.h"

void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

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
}
