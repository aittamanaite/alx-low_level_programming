#include "main.h"
/**
 * _puts_recursion - fucntion
 *
 * @s: parametre
 *
 * Return:0 (success).
 *
*/
void _puts_recursion(char *s)
{
	if (*s > '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
