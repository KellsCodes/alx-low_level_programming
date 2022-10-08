#include "main.h"
/**
 * malloc_checked - allocates memory to the pointer argument b
 *
 * @b: pointer argument for memory allocation
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *e;

	e = malloc(b);

	if (e == NULL)
		exit(98);

	return (e);
}
