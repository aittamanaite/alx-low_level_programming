#include "main.h"

/**
 * _isupper - is a fucntion check if c is upper.
 *
 * @c: variable
 *
 * Return: 1 success 0 (fail).
*/
int _isupper(int c)
{
        if (c >= 48 && c <= 57)
                return (1);
        else
                return (0);
}
