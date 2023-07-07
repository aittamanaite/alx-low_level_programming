#include "main.h"

/**
 * _putchar - function to print th caractere
 *
 * @c: the caractere to print
 *
 * Return : 1 success.
 *         -1 error.
 * 
*/
int _putchar(char c)
{

	return (write(1, &c, 1));

}
