#include "main.h"

/**
<<<<<<< HEAD
 * jack_bauer - function
=======
 * jack_bauer - print every minute of the day, starting from 00:00 - 23:59.
>>>>>>> 48514fc87d01417981a5bad2f72ed70a2ecdb156
*/

void jack_bauer(void)
{
<<<<<<< HEAD
	 int hours, mins;
=======
	int h, m;
>>>>>>> 48514fc87d01417981a5bad2f72ed70a2ecdb156

	for (h = 0 ; h <= 23 ; h++)
	{
		for (m = 0 ; m <= 59 ; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
