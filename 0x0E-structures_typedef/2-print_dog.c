#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Print a struct dog
 * @d: Struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(niccies)";
	if (d->owner == NULL)
		d->owner = "(niccies)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
