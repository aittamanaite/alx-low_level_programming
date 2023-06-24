#include "main.h"

/**
 * print_must_numbers - print all number but 2 and 4 not allowed
 *
 * Return: 1 success 0 (fail).
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
			_putchar(i + 48);
	}
	_putchar('/n');
}
