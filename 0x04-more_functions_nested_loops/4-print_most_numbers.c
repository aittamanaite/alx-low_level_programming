#include "main.h"

/**
 * print_must_numbers - print all number but 2 and 4 not allowed
 *
 * Return: 1 success 0 (fail).
*/
void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num == 50 || num == 52)
			continue;
			_putchar(num);
	}
	_putchar('\n');
}
