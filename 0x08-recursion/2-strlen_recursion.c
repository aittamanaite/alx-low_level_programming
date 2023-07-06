#include "main.h"
/**
 * _strlen_recursion - fucntion
 *
 * @s: parametre
 *
 * Return:0 (success).
 *
*/
int _strlen_recursion(char *s)
{
	int count=0;

	if (*s > '\0')
	{
		count += _strlen_recursion(s + 1) + 1;
		_putchar(*s);
	}

	return (count);
}
