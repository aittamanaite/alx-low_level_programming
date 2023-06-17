#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: a c programme
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char : %u byte(s)\n", sizeof(a));
	printf("Size of an int : %u byte(s)\n", sizeof(b));
	printf("Size of a long int: %u byte(s)\n", sizeof(c));
	printf("Size of long long int : %u byte(s)\n", sizeof(d));
	printf("Size of float : %u byte(s)\n", sizeof(e));
	return (0);
}
