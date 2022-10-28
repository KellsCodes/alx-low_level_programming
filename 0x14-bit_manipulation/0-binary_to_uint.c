#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 *
 * @b: binary number pointer
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, num_of_chars = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b < 48 || *b > 49)
		{
			num_of_chars++;
			break;
		}
		i++;
		b++;
	}
	if (num_of_chars >= 1)
		return (0);

	b = b - 1;

	while (i >= 0)
	{
		int power = 1, j;
		
		if (i > 0)
		{
			for (j = 1; j <= i; ++j)
				power = power * 2;
		}

		printf("%d power\n", power);
		if (*b == 48)
			uint = uint + 0 * power;
		else
			uint = uint + 1 * power;
		i--;
		b--;
	}

	return (uint);
}
