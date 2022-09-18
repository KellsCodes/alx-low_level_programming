#include "main.h"

/**
 * positive_or_negative - checks the sign of a number
 * @i: input number
 * Return:void
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", 0);
	else if (i == 0)
		printf("%d is zero\n", 0);
	else
		printf("%d is positive\n", 1);
}
