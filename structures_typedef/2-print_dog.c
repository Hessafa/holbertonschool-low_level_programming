#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* Print name or (nil) */
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		/* Print age */
		printf("Age: %.6f\n", d->age);

		/* Print owner or (nil) */
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
