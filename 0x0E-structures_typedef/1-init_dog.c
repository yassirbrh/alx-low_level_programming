#include "dog.h"

/**
 * init_dog - Function
 *
 * Description: Initialize a variable of type struct dog.
 *
 * @d: Pointer to the variable of type struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: No return because of it's a void function.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
