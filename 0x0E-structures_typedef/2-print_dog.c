#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: the dog struct object
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", (*d).name);
		else
			printf("(nil)\n");
		
		printf("Age: %.1f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
