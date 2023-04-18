#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Return: None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;/*exit function*/

	d->name = name; /*dog's name*/
	d->age = age; /*dog's age*/
	d->owner = owner; /*dog's owner*/
}

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Fido", 3.5, "John");

	return (0);/*end of main*/
}
