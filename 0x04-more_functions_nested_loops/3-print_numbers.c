#include "main.h"

/**
 * print_numbers - is a fucntion check if c is upper.
 *
 * Return: 1 success 0 (fail).
*/
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while  (num >= 0 && num <= 9);
	_putchar('\n');
}
