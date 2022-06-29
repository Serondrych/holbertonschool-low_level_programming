#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
*
* Return: 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
