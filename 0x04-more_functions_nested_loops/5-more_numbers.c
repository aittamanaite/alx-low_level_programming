include "main.h"
/**
 * more_numbers -  checks for checks for a digit (0 through 9).
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m / 10 != 0)
			{
				_putchar(m / 10 + '0');
			}
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
