#include "main.h"

/**
 * print_must_numbers - print all number but 2 and 4 not allowed
 *
 * Return: 1 success 0 (fail).
*/
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
			_putchar(num + 48);
	}
	_putchar('\n');
}
