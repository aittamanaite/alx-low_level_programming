#include "dog.h"
/**
 * init_dog - function void
 * @d: pointer
 * @name: parameter
 * @age:parameter
 * @owner: parametere
 * Return : 0(success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
