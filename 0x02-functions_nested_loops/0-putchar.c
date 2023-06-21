#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using _putchar prototype
 *
 * Return: always 0 (success)
*/
int main(void)
{
<<<<<<< HEAD
	char str[] = "_putchar";
	int ch;
	for(ch= 0;ch < 8;ch++)
=======
	int ch;
	char str[] = "_putchar";

	for (ch = 0; ch < 8; ch++)
>>>>>>> c937365d71edea88b0aaaf8eebb582c231654090
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
