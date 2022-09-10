#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hpla;

	for (hpla = 'z'; hpla >= 'a'; hpla--)
	{
		putchar(hpla);
	}
	putchar('\n');
	return (0);
}
