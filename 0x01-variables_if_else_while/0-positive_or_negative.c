#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: ac programme
 *
 * Return: 0
*/
int main(void)
{
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
	       printf("%d is positive", n);
	else if( n == 0)
 		printf("%d is 0", n);
	else
		printf("%d is negative", n);	
	return (0);
}
