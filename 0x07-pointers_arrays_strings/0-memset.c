#include "main.h"

/**
<<<<<<< HEAD
 * *_memset - check the code
 *
 * @s: var1
 *
 * @b: var2
 *
 * @n: var3
 *
 * Return: Always 0.
*/

=======
 *_memset - fill a block of memory with a specific value
 *@s: starting address of memory to be filled
 *@b: the desired value
 *@n: number of bytes to be changed
 *
 *Return: changed array with new value for n bytes
 */
>>>>>>> 4c5aea85f7a503be6f8c46a700bee1c8c38913b2
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
