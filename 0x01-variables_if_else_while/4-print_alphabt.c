#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
	{
		if (lower_alphabet == 'e' || lower_alphabet == 'q')
		{
			continue;
		}
		putchar(lower_alphabet);
	}
	putchar('\n');
	return (0);
}
