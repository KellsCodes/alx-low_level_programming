#include "main.h"

/**
 * swap_int - swap places of pointer arguments in the function
 *
 * @a: argument for swap
 * @b: argument for
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
