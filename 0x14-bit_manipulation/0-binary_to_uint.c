#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number pointer
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, num_of_chars = 0;
	int i = 0, k = 0;
	const char *temp_value = b;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b < 48 || *b > 49)
		{
			num_of_chars++;
			break;
		}
		i++, b++;
	}
	if (num_of_chars >= 1)
		return (0);
	while (k < i)
	{
		int tempPower = 1, num = temp_value[k], j = i - (k + 1);

		while (j > 0)
		{
			tempPower *= 2;
			j--;
		}
		uint += num == 48 ? 0 * tempPower : 1 * tempPower;
		k++;
	}
	return (uint);
}
