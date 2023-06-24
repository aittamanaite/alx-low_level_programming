#include "main.h"

/**
 * _isdigit - is a fucntion check if c is upper.
 *
 * @c: variable
 *
 * Return: 1 success 0 (fail).
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
