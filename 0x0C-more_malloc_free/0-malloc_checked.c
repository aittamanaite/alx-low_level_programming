#include "main.h"
/**
 * *malloc_checked - entry
 *
 * @b: para
 *
 * Return: 0.
 *
*/
void *malloc_checked(unsigned int b)
{
	int *my = malloc(b);

	if (my == null)
		exit(98);

	return (my);
}
