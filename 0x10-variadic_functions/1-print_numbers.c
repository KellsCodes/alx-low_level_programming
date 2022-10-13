#include "variadic_functions.h"

/**
 * print_numbers - prints variable number of arguments
 *
 * @separator: separates each number from the other
 * @n: the number of parameters
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator)
	{
		for (i = 0; i < n; ++i)
		{
			printf("%d", va_arg(list, int));
			if (n - i > 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
