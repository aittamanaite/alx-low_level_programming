#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints from a til z with _putchar
 *
 * Return: 0
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
