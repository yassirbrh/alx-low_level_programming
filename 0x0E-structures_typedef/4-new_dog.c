#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Function
 *
 * Description: Creates a new dog.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *dog_name, *owner_name;

	*dog_name = malloc(sizeof(char) * (strlen(name) + 1));
	*owner_name = malloc(sizeof(char) * (strlen(owner) + 1));
	*my_dog = malloc(sizeof(dog_t));
	if (owner_name == NULL || dog_name == NULL || my_dog == NULL)
	{
		free(owner_name);
		free(dog_name);
		free(my_dog);
		return (NULL);
	}
	strcpy(owner_name, owner);
	strcpy(dog_name, name);
	my_dog->name = name;
	my_dog->age = age;
	mydog->owner = owner;
	return (my_dog);
}
