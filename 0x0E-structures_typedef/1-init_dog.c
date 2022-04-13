#include "dog.h"
/**
 * init_dog - a function that initialises a variable of type struct dog
 *
 * @d: pointer to type struct dog
 * @name: string
 * @age: int
 * @owner: string
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
