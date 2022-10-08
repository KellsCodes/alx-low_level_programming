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
	void *memallocated;

	memallocated = malloc(nmemb * size);

	if (nmemb <= 0 || size <= 0 || memallocated == NULL)
		return (NULL);
	return (memallocated);
}
