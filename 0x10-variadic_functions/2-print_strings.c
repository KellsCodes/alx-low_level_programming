#include "variadic_functions.h"

/**
 * print_strings - prints strings with variable parameters
 *
 * @separator: separator between each string
 * @n: number of parameters as input
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *temp;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		temp = va_arg(list, char*);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (n - i > 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
}
