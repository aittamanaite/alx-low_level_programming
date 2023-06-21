#include "main.h"

/**
 * main - Entry point
 *
 * Description : a c programme
 *
 * Return : 0
 * 
*/

int main()
{
	char str[] ="_putchar";
	int ch;
	for(ch = 0;ch < 8;ch++)
		_putchar(str[ch]);
	_putchar("\n");
	return (0);
}
