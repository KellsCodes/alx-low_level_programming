#include "main.h"
/**
 * _calloc - allocate memory for an array set to 0
 *
 * @nmemb: the number of memory blocks to be allocated
 * @size: the size in bytes for each of the block of memory allocated
 * Return: pointer to allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memallocated;
	unsigned int i = 0;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	memallocated = malloc(nmemb * size);
	if (memallocated == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
		*(memallocated + i) = 0;

	return (memallocated);
}
