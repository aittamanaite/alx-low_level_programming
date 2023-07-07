#include "main.h"

/**
 * _strlen - check the code
 *
 * @s:parametere.
 *
 * Return: Always 0.
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}

