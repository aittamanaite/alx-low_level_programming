#include "main.h"
/**
 * factorial - fucntion
 *
 * @n: parametre
 *
 * Return:0 (success).
 *
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}