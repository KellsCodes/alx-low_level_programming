#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char b16;

	for (num = 0; num < 10; num++)
	{
		putchar(num % 10 + '0');
	}

	for (b16 = 'a'; b16 <= 'f'; b16++)
	{
		putchar(b16);
	}
	putchar('\n');
	return (0);
}
