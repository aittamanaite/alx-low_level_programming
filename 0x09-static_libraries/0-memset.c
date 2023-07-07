#include "main.h"

/**
 * *_memset - check the code
 *
 * @s: var1
 *
 * @b: var2
 *
 * @n: var3
 *
 * Return: 
 *
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
