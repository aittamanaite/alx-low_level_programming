#include "function_pointers.h"

/**
 * int_index - function searches for integer.
 * @array: pointer.
 * @size: size.
 * @cmp: pointer_function.
 *
 * Return: int.
 * Description: hello!
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
