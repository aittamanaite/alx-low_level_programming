#include "variadic_functions.h"
/**
 * sum_them_all - function
 * @n: var
 * Return: int.
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;

		if  (n == 0)
			return (0);
		va_start(args,  n);
		for (int i = 0; i < n; i++)
		{
		sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
}
