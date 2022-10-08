#include "main.h"
/**
 * array_range - creates an ordered array
 *
 * @min: min value of the array
 * @max: max value of the array
 * Return: NULL if min > max
 * NULL if malloc fails
 * Ordered array on success
 */
int *array_range(int min, int max)
{
	int *array, i = 0;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++, min++;
	}
	return (array);
}
