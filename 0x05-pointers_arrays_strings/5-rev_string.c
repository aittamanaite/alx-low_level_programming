#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: var
 *
 * Return: Always 0.
*/
void rev_string(char *s)
{
	int l, i, j;
	char tmp;

	for (j = 0; s[j] != '\0'; j++)
		l++;

	for (i = 0; i < 1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l -  1 - i] = tmp;
	}
}
