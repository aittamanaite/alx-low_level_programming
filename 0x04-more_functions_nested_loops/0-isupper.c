#include "main.h"

/**
 * _isupper: is a fucntion return 1 or 0.
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
