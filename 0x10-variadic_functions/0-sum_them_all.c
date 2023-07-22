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

	va_start(args,  n);
	for (int i = 0; i  < n; i++)
	{
		if  (n == 0)
			return (0);
		else
		{
			sum += va_arg(args, int);
		}
		va_end(args);
	}
	return (sum);
}
