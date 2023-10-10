#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @dp: struct dog to print
 */
void print_dog(struct dog *dp)
{
	if (dp == NULL)
		return;

	if (dp->name == NULL)
		d->name = "(nil)";
	if (dp->owner == NULL)
		dp->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", dp->name, dp->age, dp->owner);
}
