#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints the info of the dog.
 * @d: just pointer!
 * Return: void.
 *
 *
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name :%s\n", d->name ? d->name : "(nail)");
		printf("age :%f\n", d->age);
		printf("Owner :%s\n", d->owner ? d->owner : ("nail"));

	}
}
