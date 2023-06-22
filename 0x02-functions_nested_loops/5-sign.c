#include "main.h"

/**
 * print_sign - function
 *
 * @n: varaible
 * Return: 1 (success) 0 (fail).
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
