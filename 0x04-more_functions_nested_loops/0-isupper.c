#include "main.h"

/**
 * _isupper - is a fucntion check if c is upper.
 *
 * @c: variable
 *
 * Return: 1 success 0 (fail).
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
