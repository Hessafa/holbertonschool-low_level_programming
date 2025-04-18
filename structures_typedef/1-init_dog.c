#include "dog.h"
#include <stddef.h>  /* Add this line to include the definition of NULL */

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)  /* Check if the pointer is not NULL */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
