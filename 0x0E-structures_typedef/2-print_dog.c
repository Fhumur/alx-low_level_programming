#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL) /*if name not filled*/
		d->name = "(nil)";
	if (d->owner == NULL) /* if dog's owner is incorrectly filled*/
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
} /*end 2-print_dog.c */
