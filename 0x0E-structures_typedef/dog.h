#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure
 *
 * Description: Define a new type struct dog with the following elements.
 *
 * @name: The name of dog.
 * @age: The age of dog.
 * @owner: The owner of dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
