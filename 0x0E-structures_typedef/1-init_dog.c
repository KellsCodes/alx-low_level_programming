#include "dog.h"
/**
 * init_dog - initializes a variable of type struct
 *
 * @d: struct dog pointer
 * @name: name value for the dog object
 * @age: age value for the dog object
 * @owner: Owner value for the dog object
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
