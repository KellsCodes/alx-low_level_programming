#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; ++i)
	{
		if (i % 15 == 0)
		{
			putchar("FizzBuzz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			putchar("Buzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			putchar("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d", i);
			putchar(' ');
		}
	}
	return (0);
}
