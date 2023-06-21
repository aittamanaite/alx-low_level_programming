#include "main.h"

/**
 * main - Entry point
 *
 * Description : prints _putchar using _putchar prototype
 *
 * Return : always 0 (success)
*/
int main(void)
{
	int ch;
	char str[] = "_putchar";

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
