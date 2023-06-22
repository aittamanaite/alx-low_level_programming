#include "main.h"
/**
 * _abs -  function
 *
 * @r: variable
 *
 * Return: 1 (success) 0 (fail).
 */
int _abs(int r)
{
	if (r < 0)
		r = (-1) * r;
	return (r);
}
