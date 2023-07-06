#include "main.h"
/**
 * _pow_recursion - fucntion
 *
 * @x: parametre
 * @y:parametre
 *
 * Return:0 (success).
 *
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recusion(x, y - 1));

}
