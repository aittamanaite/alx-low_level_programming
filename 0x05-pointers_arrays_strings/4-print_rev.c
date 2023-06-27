#include "main.h"

/**
 * print_rev - print char in reverse.
 *
 * @s:var
 *
 * Return: Always 0.
*/
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	while (count--)
		_putchar(s[count]);
	_putchar('\n');
}
