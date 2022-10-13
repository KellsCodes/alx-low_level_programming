#include "main.h"

/**
 * sum_them_all - variadic function that sums all unsigned int values
 *
 * @n: the initial int parameter
 *
 * Return: n === 0 return 0 else int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum = 0;

	va_start(list, n);
	for (i = 0; i < n; ++i)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
