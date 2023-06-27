#include "main.h"

/**
 * swap_int - check the code
 *
 * @a: varaible
 * @b: varaible
 * Return: Always 0.
*/
	void swap_int(int *a, int *b)
	{
		int tmp;

		tmp = *a;
		*a = *b;
		*b = tmp;
	}
