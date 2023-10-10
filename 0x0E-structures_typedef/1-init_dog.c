#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @dp: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *dp, char *name, float age, char *owner)
{
	if (dp == NULL)
		dp = malloc(sizeof(struct dog));
	dp->name = name;
	dp->age = age;
	dp->owner = owner;
}
