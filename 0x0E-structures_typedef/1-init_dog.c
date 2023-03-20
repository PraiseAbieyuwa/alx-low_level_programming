#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a variable of type struct dog
 * @name: declaration of name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL) /* validate if d is initiated correctly */
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
