#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: the dog struct object
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s\nAge: %.1f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
